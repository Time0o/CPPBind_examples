package.cpath = '/rom/?.so;' .. package.cpath

local util = require 'util'

local L4Re = {}

local function load_l4re_module(name)
  local module = require(name)

  if (module.L4Re ~= nil) then
    for k, v in pairs(module.L4Re) do
      L4Re[k] = v
    end
  end
end

load_l4re_module('capability')
load_l4re_module('cap_alloc')
load_l4re_module('dataspace')
load_l4re_module('env')
load_l4re_module('mem_alloc')
load_l4re_module('rm')

local str =
  "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod " ..
  "tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At " ..
  "vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd " ..
  "gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum " ..
  "dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor " ..
  "invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero " ..
  "eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no " ..
  "sea takimata sanctus est Lorem ipsum dolor sit amet."


local function alloc(ma, size)
  local cap_alloc = L4Re.Util.get_cap_alloc()

  local ds = cap_alloc:alloc_dataspace()

  assert(ma:access():alloc(size, ds) == 0)

  assert(ds:access():allocate(0, size) == 0)

  return ds
end

local function reserve(rm, size)
  local start = 0
  err, start = rm:access():reserve_area(start,
                                        size,
                                        L4Re.RM_F_SEARCH_ADDR)
  assert(err == 0)

  return start
end

local function map(ds, start, flags)
  assert(ds:access():map_region(0, flags, start, start + ds:access():size()) == 0)
end

local function attach(rm, ds, flags)
  local start = 0

  err, start = rm:access():attach(start,
                                  ds:access():size(),
                                  L4Re.RM_F_SEARCH_ADDR | flags,
                                  ds)
  assert(err == 0)

  return start
end

-- environment
local env = L4Re.Env.env()

local ma = env:mem_alloc_1()
local rm = env:rm_1()

-- create dataspace
local ds = alloc(ma, #str)

local ds_size = ds:access():size()
assert(ds_size == #str)

local ds_flags = ds:access():flags()
local ds_rights = ds_flags:fpage_rights()
assert(ds_rights == L4Re.DATASPACE_F_RWX)

-- map dataspace
local ds_start = reserve(rm, ds_size)

map(ds, ds_start, L4Re.DATASPACE_F_RW)

util.strcpy(ds_start, str)

assert(util.strcmp(ds_start, str) == 0)

-- clear dataspace
ds:access():clear(0, ds_size)

local zeros = string.rep("\0", #str)
assert(util.strcmp(ds_start, zeros) == 0)

-- copy in another dataspace
local ds_copy_in = alloc(ma, #str)

local ds_copy_in_start = attach(rm, ds_copy_in, L4Re.RM_F_RW)
util.strcpy(ds_copy_in_start, str)

ds:access():copy_in(0, ds_copy_in, 0, ds_size)
assert(util.strcmp(ds_start, str) == 0)

print('success')
