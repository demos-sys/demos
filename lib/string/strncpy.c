/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:16:32.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

char *strncpy(char *restrict s1, const char *restrict s2, size_t n)
{
    char *save = s1;
    while(n && (*s1++ = *s2++))
        n--;
    while(n-- > 1)
        *s1++ = 0;
    return save;
}
