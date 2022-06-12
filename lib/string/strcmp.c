/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:15:37.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

int strcmp(const char *restrict s1, const char *restrict s2)
{
    while(*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
