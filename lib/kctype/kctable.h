/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 01:39:36.           */
/* Author: Kirill GPRB.                     */
#ifndef _KCTABLE_H_
#define _KCTABLE_H_ 1

#define KCTABLE_NULL 0x000
#define KCTABLE_CTRL 0x001
#define KCTABLE_GRPH 0x002
#define KCTABLE_SPCE 0x004
#define KCTABLE_BLNK 0x008
#define KCTABLE_UPRC 0x010
#define KCTABLE_LWRC 0x020
#define KCTABLE_DECD 0x040
#define KCTABLE_HEXD 0x080
#define KCTABLE_PNCT 0x100

struct kctable {
    int lower, upper;
    unsigned int flags;
};

#define KCTABLE_SIZE 0x101 /* 256 characters plus EOF */
extern const struct kctable kctable[KCTABLE_SIZE];

#endif /* _KCTABLE_S_H_ */
