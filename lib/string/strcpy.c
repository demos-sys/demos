/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:15:48.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

char *strcpy(char *restrict s1, const char *restrict s2)
{
    char *save = s1;
    while((*s1++ = *s2++));
    return save;
}
