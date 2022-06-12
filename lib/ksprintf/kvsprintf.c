/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:30:40.           */
/* Author: Kirill GPRB.                     */
#include <stdint.h>
#include <ksprintf.h>

size_t kvsprintf(char *restrict s, const char *restrict fmt, va_list va)
{
    return kvsnprintf(s, SIZE_MAX, fmt, va);
}
