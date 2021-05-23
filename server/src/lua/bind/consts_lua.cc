#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/lua/lua_util.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/ARCH-x86/consts.h"

#include "/home/timo/github/projects/cppbind/generate/cppbind/type_info.h"

namespace cppbind::type_info {

}

namespace
{

int get_l4_pageshift(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  auto __out = L4_PAGESHIFT;

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int get_l4_superpageshift(lua_State *L)
{
  if (lua_gettop(L) != 0)
    return luaL_error(L, "function expects 0 arguments");

  auto __out = L4_SUPERPAGESHIFT;

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

void _register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  {
    static luaL_Reg const _functions[] = {
      {"get_l4_pageshift", get_l4_pageshift},
      {"get_l4_superpageshift", get_l4_superpageshift},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }
}

void _createmetatables(lua_State *L)
{

}

extern "C"
{

LUALIB_API int luaopen_consts(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace