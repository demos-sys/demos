/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:16:53.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

const char *strrchr(const char *restrict s, int c)
{
    const char *cp = NULL;
    do {
        if(*s == c)
            cp = s;
    } while(*s++);
    return cp;
}
