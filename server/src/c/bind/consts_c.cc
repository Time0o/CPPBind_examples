#include <cassert>
#include <cerrno>
#include <exception>
#include <stdexcept>
#include <utility>

#include "cppbind/c/c_bind_error_cc.h"
#include "cppbind/c/c_util_cc.h"

#include "/home/timo/github/l4re/l4/pkg/l4re-core/l4sys/include/ARCH-x86/consts.h"

extern "C" {

#include "/home/timo/github/l4re/l4/pkg/l4re-c-examples/server/src/c/bind/consts_c.h"

int get_l4_pageshift(void)
{
  auto __out = L4_PAGESHIFT;

  int __ret;

  __ret = __out;

  return __ret;
}

int get_l4_superpageshift(void)
{
  auto __out = L4_SUPERPAGESHIFT;

  int __ret;

  __ret = __out;

  return __ret;
}

} // extern "C"