PKGDIR ?= ../../..
L4DIR  ?= $(PKGDIR)/../..

TARGET := example_dataspace

SRC_C_example_dataspace  := example_dataspace.c
SRC_CC_example_dataspace := bind/consts_c.cc \
                            bind/cap_alloc_c.cc \
                            bind/capability_c.cc \
                            bind/env_c.cc \
                            bind/dataspace_c.cc \
                            bind/mem_alloc_c.cc \
                            bind/rm_c.cc

PRIVATE_INCDIR := $(PKGDIR)/wrap $(PKGDIR)/server/src/c/bind

REQUIRES_LIBS := l4re_c l4re_c-util

include $(L4DIR)/mk/prog.mk
