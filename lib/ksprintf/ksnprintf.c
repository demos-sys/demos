/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:29:01.           */
/* Author: Kirill GPRB.                     */
#include <ksprintf.h>

size_t ksnprintf(char *restrict s, size_t n, const char *restrict fmt, ...)
{
    size_t r;
    va_list va;
    va_start(va, fmt);
    r = kvsnprintf(s, n, fmt, va);
    va_end(va);
    return r;
}
