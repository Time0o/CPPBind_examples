#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4re/include/mem_alloc"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/server/src/c/bind/mem_alloc_c.h"

long l4_re_mem_alloc_alloc(const struct l4_re_mem_alloc * __self, long size, l4_cap_idx_t mem, unsigned long flags, unsigned long align)
{
  using namespace L4Re;

  const L4Re::Mem_alloc * ___self;
  long _size;
  const L4::Cap<L4Re::Dataspace> * _mem;
  unsigned long _flags = 0;
  unsigned long _align = 0;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Mem_alloc>(__self);

  _size = size;

  auto __mem = L4::Cap<L4Re::Dataspace>(mem);
  _mem = &__mem;

  _flags = flags;

  _align = align;

  auto __out = ___self->alloc(_size, *_mem, _flags, _align);

  long __ret;

  __ret = __out;

  return __ret;
}

long l4_re_mem_alloc_free(const struct l4_re_mem_alloc * __self, l4_cap_idx_t mem)
{
  using namespace L4Re;

  const L4Re::Mem_alloc * ___self;
  const L4::Cap<L4Re::Dataspace> * _mem;

  assert(__self->is_initialized);
  ___self = cppbind::c::struct_cast<const L4Re::Mem_alloc>(__self);

  auto __mem = L4::Cap<L4Re::Dataspace>(mem);
  _mem = &__mem;

  auto __out = ___self->free(*_mem);

  long __ret;

  __ret = __out;

  return __ret;
}

void l4_re_mem_alloc_delete(struct l4_re_mem_alloc * __self)
{
  using namespace L4Re;

  L4Re::Mem_alloc * ___self;

  if (!__self->is_initialized) return;
  ___self = cppbind::c::struct_cast<L4Re::Mem_alloc>(__self);

  ___self->~Mem_alloc();
}

} // extern "C"