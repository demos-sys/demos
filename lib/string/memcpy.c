/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:14:52.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

void *memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
    unsigned char *dp = s1;
    const unsigned char *sp = s2;
    while(n--)
        *dp++ = *sp++;
    return s1;
}
