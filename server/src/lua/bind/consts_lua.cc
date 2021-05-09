#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/ARCH-x86/consts.h"

#include "cppbind/type_info.h"

namespace cppbind::type_info {

}

#include "cppbind/lua/lua_util.h"

namespace
{

void _register(lua_State *L)
{
  lua_createtable(L, 0, 0);
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