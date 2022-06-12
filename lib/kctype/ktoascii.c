/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:43:39.           */
/* Author: Kirill GPRB.                     */
#include <kctype.h>

int ktoascii(int c)
{
    return (c & 0x7F);
}
