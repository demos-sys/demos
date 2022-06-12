/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:59:07.           */
/* Author: Kirill GPRB.                     */
#ifndef _DEMOS_SYSCON_H_
#define _DEMOS_SYSCON_H_ 1
#include <stddef.h>

struct syscon {
    void *driver_data;
    const char name[64];
    unsigned short flags;
    void(*init)(struct syscon *con);
    size_t(*write)(struct syscon *con, const void *s, size_t n);
    struct syscon *next;
};

void syscon_register(struct syscon *con);
void syscon_activate(struct syscon *con);
void syscon_write(const void *s, size_t n);

#endif /* _DEMOS_SYSCON_H_ */
