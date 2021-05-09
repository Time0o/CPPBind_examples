#define LUA_LIB

#include "lua.h"
#include "lauxlib.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/cxx/capability.h"
#include </home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/dataspace>
#include </home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/mem_alloc>
#include </home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/rm>

#include "cppbind/type_info.h"

namespace cppbind::type_info {
  type_instance<L4::Cap<L4::Task>> _ZTSN2L43CapINS_4TaskEEE;
  type_instance<L4::Cap<L4::Kobject>> _ZTSN2L43CapINS_7KobjectEEE;
  type_instance<L4::Cap<L4::Meta>> _ZTSN2L43CapINS_4MetaEEE;
  type_instance<L4::Cap<L4::Factory>> _ZTSN2L43CapINS_7FactoryEEE;
  type_instance<L4::Cap<L4::Thread>> _ZTSN2L43CapINS_6ThreadEEE;
  type_instance<L4::Cap<L4::Irq>> _ZTSN2L43CapINS_3IrqEEE;
  type_instance<L4::Cap<L4::Vm>> _ZTSN2L43CapINS_2VmEEE;
  type_instance<L4::Cap<void>> _ZTSN2L43CapIvEE;
  type_instance<L4::Cap<L4Re::Dataspace>> _ZTSN2L43CapIN4L4Re9DataspaceEEE;
  type_instance<L4::Cap<L4Re::Mem_alloc>> _ZTSN2L43CapIN4L4Re9Mem_allocEEE;
  type_instance<L4::Cap<L4Re::Rm>> _ZTSN2L43CapIN4L4Re2RmEEE;
}

#include "cppbind/lua/lua_util.h"

namespace
{

int l4_cap_l4_task_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Task>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Task>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Task>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Task>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap<L4::Task> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Task>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4::Task>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Task> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4::Task>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_new_l4_task(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4::Task>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE");;

  return 1;
}

int l4_cap_l4_task_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_task_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_task_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_task_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_task_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Task> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_task_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Task> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Task>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_kobject_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Kobject>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;

  return 1;
}

int l4_cap_l4_kobject_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Kobject>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;

  return 1;
}

int l4_cap_l4_kobject_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Kobject>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;

  return 1;
}

int l4_cap_l4_kobject_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Kobject>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;

  return 1;
}

int l4_cap_l4_kobject_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Kobject>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;

  return 1;
}

int l4_cap_l4_kobject_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap<L4::Kobject> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Kobject>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE");;

  return 1;
}

int l4_cap_l4_kobject_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_kobject_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_kobject_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_kobject_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_kobject_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Kobject> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_kobject_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Kobject> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Kobject>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_meta_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Meta>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;

  return 1;
}

int l4_cap_l4_meta_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Meta>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;

  return 1;
}

int l4_cap_l4_meta_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Meta>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;

  return 1;
}

int l4_cap_l4_meta_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Meta>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;

  return 1;
}

int l4_cap_l4_meta_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Meta>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;

  return 1;
}

int l4_cap_l4_meta_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap<L4::Meta> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Meta>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE");;

  return 1;
}

int l4_cap_l4_meta_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_meta_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_meta_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_meta_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_meta_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Meta> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_meta_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Meta> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Meta>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_factory_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Factory>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");;

  return 1;
}

int l4_cap_l4_factory_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Factory>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");;

  return 1;
}

int l4_cap_l4_factory_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Factory>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");;

  return 1;
}

int l4_cap_l4_factory_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Factory>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");;

  return 1;
}

int l4_cap_l4_factory_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap<L4::Factory> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Factory>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");;

  return 1;
}

int l4_cap_l4_factory_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap<L4::Factory> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Factory>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE");;

  return 1;
}

int l4_cap_l4_factory_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_factory_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_factory_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_factory_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_factory_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Factory> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_factory_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Factory> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Factory>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_thread_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Thread>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");;

  return 1;
}

int l4_cap_l4_thread_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Thread>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");;

  return 1;
}

int l4_cap_l4_thread_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Thread>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");;

  return 1;
}

int l4_cap_l4_thread_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Thread>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");;

  return 1;
}

int l4_cap_l4_thread_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap<L4::Thread> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Thread>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");;

  return 1;
}

int l4_cap_l4_thread_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap<L4::Thread> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Thread>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE");;

  return 1;
}

int l4_cap_l4_thread_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_thread_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_thread_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_thread_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_thread_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Thread> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_thread_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Thread> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Thread>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_irq_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Irq>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");;

  return 1;
}

int l4_cap_l4_irq_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Irq>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");;

  return 1;
}

int l4_cap_l4_irq_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Irq>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");;

  return 1;
}

int l4_cap_l4_irq_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Irq>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");;

  return 1;
}

int l4_cap_l4_irq_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap<L4::Irq> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Irq>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");;

  return 1;
}

int l4_cap_l4_irq_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap<L4::Irq> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Irq>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE");;

  return 1;
}

int l4_cap_l4_irq_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_irq_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_irq_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_irq_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_irq_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Irq> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_irq_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Irq> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Irq>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_vm_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4::Vm>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");;

  return 1;
}

int l4_cap_l4_vm_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Vm>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");;

  return 1;
}

int l4_cap_l4_vm_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4::Vm>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");;

  return 1;
}

int l4_cap_l4_vm_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4::Vm>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");;

  return 1;
}

int l4_cap_l4_vm_move(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap<L4::Vm> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Vm>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");;

  return 1;
}

int l4_cap_l4_vm_copy(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap<L4::Vm> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4::Vm>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE");;

  return 1;
}

int l4_cap_l4_vm_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_vm_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_vm_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_vm_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_vm_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4::Vm> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_vm_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4::Vm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4::Vm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_void_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const void * _p;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _p = cppbind::type_info::typed_pointer_cast<const void>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<void>(_p);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<void>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_new_3(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<void>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_new_4(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<void>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_new_5(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<void>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<void>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap<void> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<void>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<void>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<void> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<void>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_new_void(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<void>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIvEE");;

  return 1;
}

int l4_cap_void_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_void_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_void_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_void_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_void_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<void> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_void_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<void> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<void>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_re_dataspace_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4Re::Dataspace>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Dataspace>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4Re::Dataspace>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Dataspace>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap<L4Re::Dataspace> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Dataspace>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap<L4Re::Dataspace> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Dataspace>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->operator->();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9DataspaceE");;

  return 1;
}

int l4_cap_l4_re_dataspace_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Dataspace>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Dataspace> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Dataspace>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_new_l4_re_dataspace(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Dataspace>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE");;

  return 1;
}

int l4_cap_l4_re_dataspace_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_re_dataspace_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_dataspace_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_re_dataspace_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_dataspace_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Dataspace> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_dataspace_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Dataspace> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Dataspace>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_re_mem_alloc_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4Re::Mem_alloc>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Mem_alloc>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap<L4Re::Mem_alloc> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Mem_alloc>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->operator->();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re9Mem_allocE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_new_l4_re_mem_alloc(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Mem_alloc>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE");;

  return 1;
}

int l4_cap_l4_re_mem_alloc_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_re_mem_alloc_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_mem_alloc_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_re_mem_alloc_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_mem_alloc_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Mem_alloc> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_mem_alloc_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Mem_alloc> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Mem_alloc>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

int l4_cap_l4_re_rm_new_1(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::Cap_type _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<L4::Cap_base::Cap_type>(cppbind::lua::tointegral<unsigned long>(L, 1));

  auto __out = new L4::Cap<L4Re::Rm>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_new_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  l4_default_caps_t _cap;

  luaL_checktype(L, 1, LUA_TNUMBER);
  _cap = static_cast<l4_default_caps_t>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Rm>(_cap);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_new_3(lua_State *L)
{
  if (lua_gettop(L) < 0 || lua_gettop(L) > 1)
    return luaL_error(L, "function expects between 0 and 1 arguments");

  using namespace L4;

  l4_cap_idx_t _idx = L4_INVALID_CAP;

  if (lua_gettop(L) < 1) goto function_call;
  luaL_checktype(L, 1, LUA_TNUMBER);
  _idx = cppbind::lua::tointegral<l4_cap_idx_t>(L, 1);

  function_call:

  auto __out = new L4::Cap<L4Re::Rm>(_idx);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_new_4(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap_base::No_init_type __1;

  luaL_checktype(L, 1, LUA_TNUMBER);
  __1 = static_cast<L4::Cap_base::No_init_type>(cppbind::lua::tointegral<unsigned int>(L, 1));

  auto __out = new L4::Cap<L4Re::Rm>(__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_move_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->move(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Rm>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_copy_1(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * _src;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _src = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->copy(*_src);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(new L4::Cap<L4Re::Rm>(__out), true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_access(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->operator->();

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN4L4Re2RmE");;

  return 1;
}

int l4_cap_l4_re_rm_copy_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Rm>(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_move_2(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Rm> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Rm>(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_copy_assign(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap<L4Re::Rm> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = &___self->operator=(*__1);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_move_assign(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;
  L4::Cap<L4Re::Rm> * __1;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  __1 = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = &___self->operator=(std::move(*__1));

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, false);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_new_l4_re_rm(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = new L4::Cap<L4Re::Rm>(*_o);

  *static_cast<void **>(lua_newuserdata(L, sizeof(void *))) = cppbind::type_info::make_typed(__out, true);
  cppbind::lua::setmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE");;

  return 1;
}

int l4_cap_l4_re_rm_cap(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->cap();

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_re_rm_is_valid(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  auto __out = ___self->is_valid();

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_rm_snd_base(lua_State *L)
{
  if (lua_gettop(L) < 1 || lua_gettop(L) > 3)
    return luaL_error(L, "function expects between 1 and 3 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  unsigned int _grant = 0;
  l4_cap_idx_t _base = L4_INVALID_CAP;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  if (lua_gettop(L) < 2) goto function_call;
  luaL_checktype(L, 2, LUA_TNUMBER);
  _grant = cppbind::lua::tointegral<unsigned int>(L, 2);

  if (lua_gettop(L) < 3) goto function_call;
  luaL_checktype(L, 3, LUA_TNUMBER);
  _base = cppbind::lua::tointegral<l4_cap_idx_t>(L, 3);

  function_call:

  auto __out = ___self->snd_base(_grant, _base);

  cppbind::lua::pushintegral(L, __out);

  return 1;
}

int l4_cap_l4_re_rm_eq(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator==(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_rm_ne(lua_State *L)
{
  if (lua_gettop(L) != 2)
    return luaL_error(L, "function expects 2 arguments");

  using namespace L4;

  const L4::Cap<L4Re::Rm> * ___self;
  const L4::Cap_base * _o;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<const L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  luaL_checktype(L, 2, LUA_TUSERDATA);
  _o = cppbind::type_info::typed_pointer_cast<const L4::Cap_base>(*static_cast<void **>(lua_touserdata(L, 2)));

  auto __out = ___self->operator!=(*_o);

  lua_pushboolean(L, __out);

  return 1;
}

int l4_cap_l4_re_rm_invalidate(lua_State *L)
{
  if (lua_gettop(L) != 1)
    return luaL_error(L, "function expects 1 arguments");

  using namespace L4;

  L4::Cap<L4Re::Rm> * ___self;

  luaL_checktype(L, 1, LUA_TUSERDATA);
  ___self = cppbind::type_info::typed_pointer_cast<L4::Cap<L4Re::Rm>>(*static_cast<void **>(lua_touserdata(L, 1)));

  ___self->invalidate();

  return 0;
}

void _register(lua_State *L)
{
  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 0);

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_task_new_1},
      {"new_2", l4_cap_l4_task_new_2},
      {"new_3", l4_cap_l4_task_new_3},
      {"new_4", l4_cap_l4_task_new_4},
      {"copy_2", l4_cap_l4_task_copy_2},
      {"move_2", l4_cap_l4_task_move_2},
      {"new_l4_task", l4_cap_l4_task_new_l4_task},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Task");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_kobject_new_1},
      {"new_2", l4_cap_l4_kobject_new_2},
      {"new_3", l4_cap_l4_kobject_new_3},
      {"new_4", l4_cap_l4_kobject_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Kobject");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_meta_new_1},
      {"new_2", l4_cap_l4_meta_new_2},
      {"new_3", l4_cap_l4_meta_new_3},
      {"new_4", l4_cap_l4_meta_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Meta");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_factory_new_1},
      {"new_2", l4_cap_l4_factory_new_2},
      {"new_3", l4_cap_l4_factory_new_3},
      {"new_4", l4_cap_l4_factory_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Factory");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_thread_new_1},
      {"new_2", l4_cap_l4_thread_new_2},
      {"new_3", l4_cap_l4_thread_new_3},
      {"new_4", l4_cap_l4_thread_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Thread");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_irq_new_1},
      {"new_2", l4_cap_l4_irq_new_2},
      {"new_3", l4_cap_l4_irq_new_3},
      {"new_4", l4_cap_l4_irq_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Irq");

  lua_createtable(L, 0, 4);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_vm_new_1},
      {"new_2", l4_cap_l4_vm_new_2},
      {"new_3", l4_cap_l4_vm_new_3},
      {"new_4", l4_cap_l4_vm_new_4},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4Vm");

  lua_createtable(L, 0, 8);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_void_new_1},
      {"new_2", l4_cap_void_new_2},
      {"new_3", l4_cap_void_new_3},
      {"new_4", l4_cap_void_new_4},
      {"new_5", l4_cap_void_new_5},
      {"copy_2", l4_cap_void_copy_2},
      {"move_2", l4_cap_void_move_2},
      {"new_void", l4_cap_void_new_void},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapVoid");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_re_dataspace_new_1},
      {"new_2", l4_cap_l4_re_dataspace_new_2},
      {"new_3", l4_cap_l4_re_dataspace_new_3},
      {"new_4", l4_cap_l4_re_dataspace_new_4},
      {"copy_2", l4_cap_l4_re_dataspace_copy_2},
      {"move_2", l4_cap_l4_re_dataspace_move_2},
      {"new_l4_re_dataspace", l4_cap_l4_re_dataspace_new_l4_re_dataspace},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4ReDataspace");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_re_mem_alloc_new_1},
      {"new_2", l4_cap_l4_re_mem_alloc_new_2},
      {"new_3", l4_cap_l4_re_mem_alloc_new_3},
      {"new_4", l4_cap_l4_re_mem_alloc_new_4},
      {"copy_2", l4_cap_l4_re_mem_alloc_copy_2},
      {"move_2", l4_cap_l4_re_mem_alloc_move_2},
      {"new_l4_re_mem_alloc", l4_cap_l4_re_mem_alloc_new_l4_re_mem_alloc},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4ReMemAlloc");

  lua_createtable(L, 0, 7);

  {
    static luaL_Reg const _functions[] = {
      {"new_1", l4_cap_l4_re_rm_new_1},
      {"new_2", l4_cap_l4_re_rm_new_2},
      {"new_3", l4_cap_l4_re_rm_new_3},
      {"new_4", l4_cap_l4_re_rm_new_4},
      {"copy_2", l4_cap_l4_re_rm_copy_2},
      {"move_2", l4_cap_l4_re_rm_move_2},
      {"new_l4_re_rm", l4_cap_l4_re_rm_new_l4_re_rm},
      {nullptr, nullptr}
    };

    luaL_setfuncs(L, _functions, 0);
  }

  lua_setfield(L, -2, "CapL4ReRm");

  lua_setfield(L, -2, "L4");
}

void _createmetatables(lua_State *L)
{
  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_4TaskEEE",
    {
      {"move_1", l4_cap_l4_task_move_1},
      {"copy_1", l4_cap_l4_task_copy_1},
      {"cap", l4_cap_l4_task_cap},
      {"is_valid", l4_cap_l4_task_is_valid},
      {"snd_base", l4_cap_l4_task_snd_base},
      {"eq", l4_cap_l4_task_eq},
      {"ne", l4_cap_l4_task_ne},
      {"invalidate", l4_cap_l4_task_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_7KobjectEEE",
    {
      {"move", l4_cap_l4_kobject_move},
      {"copy", l4_cap_l4_kobject_copy},
      {"cap", l4_cap_l4_kobject_cap},
      {"is_valid", l4_cap_l4_kobject_is_valid},
      {"snd_base", l4_cap_l4_kobject_snd_base},
      {"eq", l4_cap_l4_kobject_eq},
      {"ne", l4_cap_l4_kobject_ne},
      {"invalidate", l4_cap_l4_kobject_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_4MetaEEE",
    {
      {"move", l4_cap_l4_meta_move},
      {"copy", l4_cap_l4_meta_copy},
      {"cap", l4_cap_l4_meta_cap},
      {"is_valid", l4_cap_l4_meta_is_valid},
      {"snd_base", l4_cap_l4_meta_snd_base},
      {"eq", l4_cap_l4_meta_eq},
      {"ne", l4_cap_l4_meta_ne},
      {"invalidate", l4_cap_l4_meta_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_7FactoryEEE",
    {
      {"move", l4_cap_l4_factory_move},
      {"copy", l4_cap_l4_factory_copy},
      {"cap", l4_cap_l4_factory_cap},
      {"is_valid", l4_cap_l4_factory_is_valid},
      {"snd_base", l4_cap_l4_factory_snd_base},
      {"eq", l4_cap_l4_factory_eq},
      {"ne", l4_cap_l4_factory_ne},
      {"invalidate", l4_cap_l4_factory_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_6ThreadEEE",
    {
      {"move", l4_cap_l4_thread_move},
      {"copy", l4_cap_l4_thread_copy},
      {"cap", l4_cap_l4_thread_cap},
      {"is_valid", l4_cap_l4_thread_is_valid},
      {"snd_base", l4_cap_l4_thread_snd_base},
      {"eq", l4_cap_l4_thread_eq},
      {"ne", l4_cap_l4_thread_ne},
      {"invalidate", l4_cap_l4_thread_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_3IrqEEE",
    {
      {"move", l4_cap_l4_irq_move},
      {"copy", l4_cap_l4_irq_copy},
      {"cap", l4_cap_l4_irq_cap},
      {"is_valid", l4_cap_l4_irq_is_valid},
      {"snd_base", l4_cap_l4_irq_snd_base},
      {"eq", l4_cap_l4_irq_eq},
      {"ne", l4_cap_l4_irq_ne},
      {"invalidate", l4_cap_l4_irq_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapINS_2VmEEE",
    {
      {"move", l4_cap_l4_vm_move},
      {"copy", l4_cap_l4_vm_copy},
      {"cap", l4_cap_l4_vm_cap},
      {"is_valid", l4_cap_l4_vm_is_valid},
      {"snd_base", l4_cap_l4_vm_snd_base},
      {"eq", l4_cap_l4_vm_eq},
      {"ne", l4_cap_l4_vm_ne},
      {"invalidate", l4_cap_l4_vm_invalidate}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIvEE",
    {
      {"move_1", l4_cap_void_move_1},
      {"copy_1", l4_cap_void_copy_1},
      {"cap", l4_cap_void_cap},
      {"is_valid", l4_cap_void_is_valid},
      {"snd_base", l4_cap_void_snd_base},
      {"eq", l4_cap_void_eq},
      {"ne", l4_cap_void_ne},
      {"invalidate", l4_cap_void_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9DataspaceEEE",
    {
      {"move_1", l4_cap_l4_re_dataspace_move_1},
      {"copy_1", l4_cap_l4_re_dataspace_copy_1},
      {"access", l4_cap_l4_re_dataspace_access},
      {"cap", l4_cap_l4_re_dataspace_cap},
      {"is_valid", l4_cap_l4_re_dataspace_is_valid},
      {"snd_base", l4_cap_l4_re_dataspace_snd_base},
      {"eq", l4_cap_l4_re_dataspace_eq},
      {"ne", l4_cap_l4_re_dataspace_ne},
      {"invalidate", l4_cap_l4_re_dataspace_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re9Mem_allocEEE",
    {
      {"move_1", l4_cap_l4_re_mem_alloc_move_1},
      {"copy_1", l4_cap_l4_re_mem_alloc_copy_1},
      {"access", l4_cap_l4_re_mem_alloc_access},
      {"cap", l4_cap_l4_re_mem_alloc_cap},
      {"is_valid", l4_cap_l4_re_mem_alloc_is_valid},
      {"snd_base", l4_cap_l4_re_mem_alloc_snd_base},
      {"eq", l4_cap_l4_re_mem_alloc_eq},
      {"ne", l4_cap_l4_re_mem_alloc_ne},
      {"invalidate", l4_cap_l4_re_mem_alloc_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });

  cppbind::lua::createmetatable(L, "METATABLE__ZTSN2L43CapIN4L4Re2RmEEE",
    {
      {"move_1", l4_cap_l4_re_rm_move_1},
      {"copy_1", l4_cap_l4_re_rm_copy_1},
      {"access", l4_cap_l4_re_rm_access},
      {"copy_assign", l4_cap_l4_re_rm_copy_assign},
      {"move_assign", l4_cap_l4_re_rm_move_assign},
      {"cap", l4_cap_l4_re_rm_cap},
      {"is_valid", l4_cap_l4_re_rm_is_valid},
      {"snd_base", l4_cap_l4_re_rm_snd_base},
      {"eq", l4_cap_l4_re_rm_eq},
      {"ne", l4_cap_l4_re_rm_ne},
      {"invalidate", l4_cap_l4_re_rm_invalidate},
      {"copy", cppbind::lua::bind_copy},
      {"move", cppbind::lua::bind_move}
    });
}

extern "C"
{

LUALIB_API int luaopen_capability(lua_State *L)
{
  _register(L);
  _createmetatables(L);

  return 1;
}

} // extern "C"

} // namespace