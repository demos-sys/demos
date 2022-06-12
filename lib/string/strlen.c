/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:15:59.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

size_t strlen(const char *restrict s)
{
    size_t i;
    for(i = 0; *s++; i++);
    return i;
}
