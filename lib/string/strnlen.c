/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:16:43.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

size_t strnlen(const char *restrict s, size_t n)
{
    size_t i;
    for(i = 0; *s++ && i < n; i++);
    return i;
}
