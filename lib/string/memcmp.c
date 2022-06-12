/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:14:42.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

int memcmp(const void *restrict s1, const void *restrict s2, size_t n)
{
    const unsigned char *ap = s1;
    const unsigned char *bp = s2;
    while(n--) {
        if(*ap != *bp)
            return *ap - *bp;
        ap++;
        bp++;
    }

    return 0;
}
