/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:44:16.           */
/* Author: Kirill GPRB.                     */
#include <kctype.h>
#include "kctable.h"

int ktoupper(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].upper;
}
