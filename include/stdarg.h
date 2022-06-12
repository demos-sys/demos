/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-12, 22:17:03.           */
/* Author: Kirill GPRB.                     */
#ifndef _STDARG_H_
#define _STDARG_H_ 1

typedef __builtin_va_list va_list;
#define va_start(va, x) __builtin_va_start(va, x)
#define va_copy(va, dv) __builtin_va_copy(va, dv)
#define va_arg(va, t)   __builtin_va_arg(va, t)
#define va_end(va)      __builtin_va_end(va)

#endif /* __STDARG_H__ */
