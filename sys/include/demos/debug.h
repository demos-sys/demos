/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 02:03:50.           */
/* Author: Kirill GPRB.                     */
#ifndef _DEMOS_DEBUG_H_
#define _DEMOS_DEBUG_H_ 1
#include <stdarg.h>
#include <sys/cdefs.h>

void realpanic(const char *restrict file, unsigned long line, const char *restrict fmt, ...) __noreturn __format(printf, 3, 4);
void realvpanic(const char *restrict file, unsigned long line, const char *restrict fmt, va_list va) __noreturn;
#define panic(fmt, ...) realpanic(__FILE__, __LINE__, (fmt), ##__VA_ARGS__)
#define vpanic(fmt, va) realvpanic(__FILE__, __LINE__, (fmt), (va))
#define panic_unless(x) do { if(__unlikely(!(x))) { panic("%s:%u: %s", __BASE_FILE__, __LINE__, #x); }} while(0)
#define panic_unless_msg(x, fmt, ...) do { if(__unlikely(!(x))) { panic((fmt), ##__VA_ARGS__); }} while(0)

#endif /* _DEMOS_DEBUG_H_ */
