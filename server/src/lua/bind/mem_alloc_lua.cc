#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/lua/lua_util.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/mem_alloc"

#include "/home/timo/github/projects/cppbind/generate/cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<L4Re::Mem_alloc> _ZTSN4L4Re9Mem_allocE;
  type_instance<L4::Cap<L4Re::Dataspace>> _ZTSN2L43CapIN4L4Re9DataspaceEEE;
}

namespace
{

int l4_re_mem_alloc_alloc(lua_State *L)
{
  if (lua_gettop(L) < 3 || lua_gettop(L) > 5)
    return luaL_error(L, "function expects between 3 and 5 arguments");

  using namespace L4Re;

  const L4Re::Mem_alloc * ___self;
  long _size;
  const L4::Cap<L4Re::Dataspace> * _mem;
  unsigned long _flags = 0;
  unsigned long _align = 0;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Mem_alloc>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _size = cppbind::lua::tointegral<long>(L, 2);

  luaL_checktype(L, 3, LUA_TUSERDATA);
  _mem = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 3)));

  if (lua_gettop(L) < 4) goto function_call;
  luaL_checktype(L, 4, LUA_TNUMBER);
  _flags = cppbind::lua::tointegral<unsigned long>(L, 4);

  if (lua_gettop(L) < 5) goto function_call;
  luaL_checktype(L, 5, LUA_TNUMBER);
  _align = cppbind::lua::tointegral<unsigned long>(L, 5);

  function_call:

  auto __out = ___self->alloc(_size, *_mem, _flags, _align);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_re_mem_alloc_free(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;

  const L4Re::Mem_alloc * ___self;
  const L4::Cap<L4Re::Dataspace> * _mem;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4Re::Mem_alloc>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _mem = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->free(*_mem);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

void _register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_pushinteger(L, L4Re::Mem_alloc::Continuous);
  lua_setfield(L, -2, "MEM_ALLOC_CONTINUOUS");

  lua_pushinteger(L, L4Re::Mem_alloc::Pinned);
  lua_setfield(L, -2, "MEM_ALLOC_PINNED");

  lua_pushinteger(L, L4Re::Mem_alloc::Super_pages);
  lua_setfield(L, -2, "MEM_ALLOC_SUPER_PAGES");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "Dataspace");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "MemAlloc");

  lua_setfield(L, -2, "L4Re");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re9Mem_allocE",
    {
      {"alloc", l4_re_mem_alloc_alloc},
      {"free", l4_re_mem_alloc_free}
    });
}

extern "C"
{

LUALIB_API int luaopen_mem_alloc(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace