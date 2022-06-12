/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:15:27.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

const char *strchr(const char *restrict s, int c)
{
    do {
        if(*s != (char)c)
            continue;
        return s;
    } while(*s++);
    return NULL;
}
