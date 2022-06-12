/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:15:04.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

void *memset(void *restrict s, int c, size_t n)
{
    unsigned char *sp = s;
    while(n--)
        *sp++ = (unsigned char)c;
    return s;
}
