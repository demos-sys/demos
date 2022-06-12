/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:13:52.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

char *kstrncpy(char *restrict s1, const char *restrict s2, size_t n)
{
    char *save = s1;
    while(*s2 && n--)
        *s1++ = *s2++;
    if(n)
        *s1 = 0;
    return save;
}
