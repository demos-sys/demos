/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:29:53.           */
/* Author: Kirill GPRB.                     */
#include <stdint.h>
#include <ksprintf.h>

size_t ksprintf(char *restrict s, const char *restrict fmt, ...)
{
    size_t r;
    va_list va;
    va_start(va, fmt);
    r = kvsnprintf(s, SIZE_MAX, fmt, va);
    va_end(va);
    return r;
}
