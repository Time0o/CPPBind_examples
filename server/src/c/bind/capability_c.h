#ifndef GUARD_CAPABILITY_C_H
#define GUARD_CAPABILITY_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_bind_error_c.h"

typedef unsigned long l4_cap_idx_t;
typedef unsigned long l4_umword_t;

struct l4_cap_base;
struct l4_re_dataspace;
struct l4_re_mem_alloc;
struct l4_re_rm;

l4_cap_idx_t l4_cap_l4_task_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_task_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_task_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_task_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_task_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_task_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_task_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_task_move_2(l4_cap_idx_t _1);

void l4_cap_l4_task_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_task_new_l4_task(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_l4_task_cap(l4_cap_idx_t __self);

int l4_cap_l4_task_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_task_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_task_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_task_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_task_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_kobject_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_kobject_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_kobject_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_kobject_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_kobject_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_kobject_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_kobject_cap(l4_cap_idx_t __self);

int l4_cap_l4_kobject_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_kobject_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_kobject_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_kobject_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_kobject_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_meta_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_meta_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_meta_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_meta_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_meta_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_meta_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_meta_cap(l4_cap_idx_t __self);

int l4_cap_l4_meta_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_meta_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_meta_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_meta_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_meta_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_factory_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_factory_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_factory_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_factory_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_factory_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_factory_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_factory_cap(l4_cap_idx_t __self);

int l4_cap_l4_factory_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_factory_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_factory_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_factory_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_factory_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_thread_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_thread_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_thread_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_thread_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_thread_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_thread_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_thread_cap(l4_cap_idx_t __self);

int l4_cap_l4_thread_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_thread_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_thread_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_thread_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_thread_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_irq_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_irq_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_irq_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_irq_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_irq_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_irq_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_irq_cap(l4_cap_idx_t __self);

int l4_cap_l4_irq_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_irq_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_irq_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_irq_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_irq_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_vm_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_vm_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_vm_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_vm_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_vm_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_vm_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_vm_cap(l4_cap_idx_t __self);

int l4_cap_l4_vm_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_vm_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_vm_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_vm_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_vm_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_void_new_1(const void * p);

l4_cap_idx_t l4_cap_void_new_2(unsigned long cap);

l4_cap_idx_t l4_cap_void_new_3(unsigned int cap);

l4_cap_idx_t l4_cap_void_new_4(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_void_new_5(unsigned int _1);

l4_cap_idx_t l4_cap_void_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_void_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_void_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_void_move_2(l4_cap_idx_t _1);

void l4_cap_void_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_void_new_void(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_void_cap(l4_cap_idx_t __self);

int l4_cap_void_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_void_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_void_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_void_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_void_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_dataspace_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_re_dataspace_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_re_dataspace_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_re_dataspace_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_re_dataspace_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_re_dataspace_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

struct l4_re_dataspace l4_cap_l4_re_dataspace_access(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_dataspace_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_re_dataspace_move_2(l4_cap_idx_t _1);

void l4_cap_l4_re_dataspace_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_dataspace_new_l4_re_dataspace(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_l4_re_dataspace_cap(l4_cap_idx_t __self);

int l4_cap_l4_re_dataspace_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_re_dataspace_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_re_dataspace_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_re_dataspace_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_re_dataspace_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

struct l4_re_mem_alloc l4_cap_l4_re_mem_alloc_access(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_move_2(l4_cap_idx_t _1);

void l4_cap_l4_re_mem_alloc_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_new_l4_re_mem_alloc(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_l4_re_mem_alloc_cap(l4_cap_idx_t __self);

int l4_cap_l4_re_mem_alloc_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_re_mem_alloc_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_re_mem_alloc_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_re_mem_alloc_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_re_mem_alloc_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_rm_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_re_rm_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_re_rm_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_re_rm_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_re_rm_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_re_rm_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

struct l4_re_rm l4_cap_l4_re_rm_access(l4_cap_idx_t __self);

void l4_cap_l4_re_rm_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_re_rm_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_re_rm_move_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_re_rm_copy_assign(l4_cap_idx_t __self, l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_re_rm_move_assign(l4_cap_idx_t __self, l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_l4_re_rm_new_l4_re_rm(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_l4_re_rm_cap(l4_cap_idx_t __self);

int l4_cap_l4_re_rm_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_re_rm_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

int l4_cap_l4_re_rm_eq(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_l4_re_rm_ne(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_l4_re_rm_invalidate(l4_cap_idx_t __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CAPABILITY_C_H