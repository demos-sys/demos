/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-12, 22:18:14.           */
/* Author: Kirill GPRB.                     */
#ifndef _STDDEF_H_
#define _STDDEF_H_ 1

#ifndef __SIZE_T_DEFINED__
#define __SIZE_T_DEFINED__ 1
typedef __SIZE_TYPE__ size_t;
#endif

#ifndef __SSIZE_T_DEFINED__
#define __SSIZE_T_DEFINED__ 1
typedef __INTMAX_TYPE__ ssize_t;
#endif

#ifndef __PTRDIFF_T_DEFINED__
#define __PTRDIFF_T_DEFINED__ 1
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif

#if 0 /* not now */
#ifndef __WCHAR_T_DEFINED__
#define __WCHAR_T_DEFINED__ 1
typedef __WCHAR_TYPE__ wchar_t;
#endif
#endif

#ifndef NULL
#define NULL ((void *)0)
#endif

#ifndef offsetof
#define offsetof(t, m) __builtin_offsetof(t, m)
#endif

#endif /* __STDDEF_H__ */
