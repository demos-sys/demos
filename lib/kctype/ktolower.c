/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:43:53.           */
/* Author: Kirill GPRB.                     */
#include <kctype.h>
#include "kctable.h"

int ktolower(int c)
{
    return kctable[(c + 1) % KCTABLE_SIZE].lower;
}
