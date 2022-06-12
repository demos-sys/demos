/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:22:19.           */
/* Author: Kirill GPRB.                     */
#ifndef _KSPRINTF_H_
#define _KSPRINTF_H_ 1
#include <stdarg.h> /* va_list */
#include <stddef.h> /* size_t, NULL */
#include <sys/cdefs.h> /* restrict, __format */

size_t ksnprintf(char *restrict s, size_t n, const char *restrict fmt, ...) __format(printf, 3, 4);
size_t ksprintf(char *restrict s, const char *restrict fmt, ...) __format(printf, 2, 3);
size_t kvsnprintf(char *restrict s, size_t n, const char *restrict fmt, va_list va);
size_t kvsprintf(char *restrict s, const char *restrict fmt, va_list va);

#endif /* _SPRINTF_H_ */
