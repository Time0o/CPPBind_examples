#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/lua/lua_util.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4re/util/include/counting_cap_alloc"

#include "/home/timo/github/projects/cppbind/generate/cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<L4::Cap<void>> _ZTSN2L43CapIvEE;
  type_instance<L4Re::Util::Counting_cap_alloc<>> _ZTSN4L4Re4Util18Counting_cap_allocINS0_7CounterIhEEEE;
}

namespace
{

int l4_re_util_counting_cap_alloc_counter_alloc(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Util::Counting_cap_alloc<>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->alloc();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<void>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_re_util_counting_cap_alloc_counter_take(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;
  const L4::Cap<void> * _cap;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Util::Counting_cap_alloc<>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  ___self->take(*_cap);

  return 0;
}

int l4_re_util_counting_cap_alloc_counter_free(lua_State *L)
{
  if (lua_gettop(L) < 2 || lua_gettop(L) > 4)
    return luaL_error(L, "function expects between 2 and 4 arguments");

  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;
  const L4::Cap<void> * _cap;
  l4_cap_idx_t _task = L4_INVALID_CAP;
  unsigned int _unmap_flags = L4_FP_ALL_SPACES;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Util::Counting_cap_alloc<>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _task = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  if (lua_gettop(L) < 4) goto function_call;
  luaL_checktype(L, 4, LUA_TNUMBER);
  _unmap_flags = cppbind::lua::tointegral<unsigned int>(L, 4);

  function_call:

  auto __out = ___self->free(*_cap, _task, _unmap_flags);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_util_counting_cap_alloc_counter_release(lua_State *L)
{
  if (lua_gettop(L) < 2 || lua_gettop(L) > 4)
    return luaL_error(L, "function expects between 2 and 4 arguments");

  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;
  const L4::Cap<void> * _cap;
  l4_cap_idx_t _task = L4_INVALID_CAP;
  unsigned int _unmap_flags = L4_FP_ALL_SPACES;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Util::Counting_cap_alloc<>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _task = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  if (lua_gettop(L) < 4) goto function_call;
  luaL_checktype(L, 4, LUA_TNUMBER);
  _unmap_flags = cppbind::lua::tointegral<unsigned int>(L, 4);

  function_call:

  auto __out = ___self->release(*_cap, _task, _unmap_flags);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_re_util_counting_cap_alloc_counter_last(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4Re;
  using namespace Util;

  L4Re::Util::Counting_cap_alloc<> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4Re::Util::Counting_cap_alloc<>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->last();

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

  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "CountingCapAllocCounter");

  lua_setfield(L, -2, "Util");

  lua_setfield(L, -2, "L4Re");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN4L4Re4Util18Counting_cap_allocINS0_7CounterIhEEEE",
    {
      {"alloc", l4_re_util_counting_cap_alloc_counter_alloc},
      {"take", l4_re_util_counting_cap_alloc_counter_take},
      {"free", l4_re_util_counting_cap_alloc_counter_free},
      {"release", l4_re_util_counting_cap_alloc_counter_release},
      {"last", l4_re_util_counting_cap_alloc_counter_last}
    });
}

extern "C"
{

LUALIB_API int luaopen_counting_cap_alloc(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace