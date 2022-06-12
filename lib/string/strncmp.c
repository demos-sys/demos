/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:16:21.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

int strncmp(const char *restrict s1, const char *restrict s2, size_t n)
{
    while(*s1 && *s1 == *s2 && n--) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
