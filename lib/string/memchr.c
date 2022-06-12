/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:14:05.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

const void *memchr(const void *restrict s, int c, size_t n)
{
    const unsigned char *sp = s;
    while(n--) {
        if(*sp == (unsigned char)c)
            return sp;
        sp++;
    }

    return NULL;
}
