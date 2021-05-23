#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/lua/lua_util.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/cxx/ipc_types"
#include </home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/dataspace>

#include "/home/timo/github/projects/cppbind/generate/cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<L4::Ipc::Cap<L4Re::Dataspace>> _ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE;
  type_instance<L4::Cap<L4Re::Dataspace>> _ZTSN2L43CapIN4L4Re9DataspaceEEE;
}

namespace
{

int l4_ipc_cap_dataspace_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Cap<L4Re::Dataspace> * _cap;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_new_2(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  using namespace L4;
  using namespace Ipc;

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_new_3(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Cap<L4Re::Dataspace> * _cap;
  unsigned char _rights;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _cap = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TNUMBER);
  _rights = cppbind::lua::tointegral<unsigned char>(L, 2);

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*_cap, _rights);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_from_ci(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  l4_cap_idx_t _c;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _c = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  auto __out = L4::Ipc::Cap_Dataspace::from_ci(_c);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Ipc::Cap<L4Re::Dataspace>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = const L4::Ipc::Cap<L4Re::Dataspace> *(*cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1))));
  ___self = &____self;

  auto __out = ___self->cap();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Dataspace>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_rights(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = const L4::Ipc::Cap<L4Re::Dataspace> *(*cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1))));
  ___self = &____self;

  auto __out = ___self->rights();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_ipc_cap_dataspace_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * ___self;

  auto ____self = const L4::Ipc::Cap<L4Re::Dataspace> *(*cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1))));
  ___self = &____self;

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_ipc_cap_dataspace_copy(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * __1;

  auto ___1 = const L4::Ipc::Cap<L4Re::Dataspace> &(*cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1))));
  __1 = &___1;

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_move(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  L4::Ipc::Cap<L4Re::Dataspace> * __1;

  auto ___1 = L4::Ipc::Cap<L4Re::Dataspace> &&(*cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1))));
  __1 = &___1;

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_ipc_cap_dataspace_new_dataspace(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;
  using namespace Ipc;

  const L4::Ipc::Cap<L4Re::Dataspace> * _o;

  auto __o = const L4::Ipc::Cap<L4Re::Dataspace> &(*cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1))));
  _o = &__o;

  auto __out = new L4::Ipc::Cap<L4Re::Dataspace>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE");;

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

  lua_setfield(L, -2, "L4ReDataspace");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4ReDataspaceF");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4ReDataspaceFlags");

  lua_createtable(L, 0, 0);

  lua_setfield(L, -2, "L4Cap");

  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_ipc_cap_dataspace_new_1},
      {"new_2", l4_ipc_cap_dataspace_new_2},
      {"new_3", l4_ipc_cap_dataspace_new_3},
      {"from_ci", l4_ipc_cap_dataspace_from_ci},
      {"copy", l4_ipc_cap_dataspace_copy},
      {"move", l4_ipc_cap_dataspace_move},
      {"new_dataspace", l4_ipc_cap_dataspace_new_dataspace},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapDataspace");

  lua_setfield(L, -2, "Ipc");

  lua_setfield(L, -2, "L4");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43Ipc3CapIN4L4Re9DataspaceEEE",
    {
      {"from_ci", l4_ipc_cap_dataspace_from_ci},
      {"cap", l4_ipc_cap_dataspace_cap},
      {"rights", l4_ipc_cap_dataspace_rights},
      {"is_valid", l4_ipc_cap_dataspace_is_valid},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_ipc_types(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace