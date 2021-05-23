PKGDIR ?= ../../..
L4DIR  ?= $(PKGDIR)/../..

TARGET := cap_alloc.so \
          capability.so \
          consts.so \
          dataspace.so \
          env.so \
          mem_alloc.so \
          rm.so \
          util.so

SRC_CC_cap_alloc.so  := bind/cap_alloc_lua.cc
SRC_CC_capability.so := bind/capability_lua.cc
SRC_CC_consts.so     := bind/consts_lua.cc
SRC_CC_dataspace.so  := bind/dataspace_lua.cc
SRC_CC_env.so        := bind/env_lua.cc
SRC_CC_mem_alloc.so  := bind/mem_alloc_lua.cc
SRC_CC_rm.so         := bind/rm_lua.cc
SRC_CC_util.so       := bind/util_lua.cc

PRIVATE_INCDIR := $(PKGDIR)/wrap

REQUIRES_LIBS := lua++

CXXFLAGS += -fno-rtti

include $(L4DIR)/mk/lib.mk
