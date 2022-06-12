/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:42:57.           */
/* Author: Kirill GPRB.                     */
#include <kctype.h>
#include "kctable.h"

int kisalnum(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_UPRC | KCTABLE_LWRC | KCTABLE_DECD);
}

int kisalpha(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_UPRC | KCTABLE_LWRC);
}

int kisascii(int c)
{
    return (c & 0x7F) == c;
}

int kisblank(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_BLNK);
}

int kiscntrl(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_CTRL);
}

int kisdigit(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_DECD);
}

int kisgraph(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_GRPH);
}

int kislower(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_LWRC);
}

int kisprint(int c)
{
    if(c == ' ')
        return 1;
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_CTRL);
}

int kispunct(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_PNCT);
}

int kisspace(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_SPCE);
}

int kisupper(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_UPRC);
}

int kisxdigit(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].flags & (KCTABLE_HEXD);
}
