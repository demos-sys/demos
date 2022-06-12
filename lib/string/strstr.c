/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:17:04.           */
/* Author: Kirill GPRB.                     */
#include <string.h>

const char *strstr(const char *restrict s1, const char *restrict s2)
{
    const char *ap = s1;
    const char *bp;

    while(*s1) {
        bp = s2;
        while (*bp && (*ap == *bp)) {
            ++ap;
            ++bp;
        }
        if (!*bp)
            return s1;
        ++s1;
        ap = s1;
    }

    return NULL;
}
