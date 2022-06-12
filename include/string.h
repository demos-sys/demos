/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 00:12:18.           */
/* Author: Kirill GPRB.                     */
#ifndef _STRING_H_
#define _STRING_H_ 1
#include <stddef.h> /* size_t, NULL */
#include <sys/cdefs.h> /* restrict */

const void *memchr(const void *restrict s, int c, size_t n);
int memcmp(const void *restrict s1, const void *restrict s2, size_t n);
void *memcpy(void *restrict s1, const void *restrict s2, size_t n);
void *memset(void *restrict s, int c, size_t n);
char *strcat(char *restrict s1, const char *restrict s2);
const char *strchr(const char *restrict s, int c);
int strcmp(const char *restrict s1, const char *restrict s2);
char *strcpy(char *restrict s1, const char *restrict s2);
size_t strlen(const char *restrict s);
char *strncat(char *restrict s1, const char *restrict s2, size_t n);
int strncmp(const char *restrict s1, const char *restrict s2, size_t n);
char *strncpy(char *restrict s1, const char *restrict s2, size_t n);
size_t strnlen(const char *restrict s, size_t n);
const char *strrchr(const char *restrict s, int c);
const char *strstr(const char *restrict s1, const char *restrict s2);

/* These have the size_t argument used not
 * as a source size limit but as a destination
 * size limit. If a same-ish thing was done to all
 * the string.h n-functions in standard, we probably
 * wouldn't have needed "safer" zoomer functions in C11. */
char *kstrncat(char *restrict s1, const char *restrict s2, size_t n);
char *kstrncpy(char *restrict s1, const char *restrict s2, size_t n);

#endif /* _STRING_H_ */
