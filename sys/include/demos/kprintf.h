/* SPDX-License-Identifier: BSD-2-Clause.   */
/* Created: 2022-06-13, 02:08:16.           */
/* Author: Kirill GPRB.                     */
#ifndef _DEMOS_KPRINTF_H_
#define _DEMOS_KPRINTF_H_ 1
#include <stdarg.h>
#include <stddef.h>
#include <sys/cdefs.h>

/* TODO: use syslog.h levels */
#define KP_EMERG    0x01
#define KP_ALERT    0x02
#define KP_CRIT     0x04
#define KP_ERROR    0x08
#define KP_WARN     0x10
#define KP_NOTICE   0x20
#define KP_INFORM   0x40
#define KP_DEBUG    0x80

extern unsigned short kp_severity_mask;
size_t realkprintf(const char *restrict file, unsigned long line, unsigned short severity, const char *restrict fmt, ...) __format(printf, 4, 5);
size_t realkvprintf(const char *restrict file, unsigned long line, unsigned short severity, const char *restrict fmt, va_list va);
#define kprintf(severity, fmt, ...) realkprintf(__FILE__, __LINE__, (severity), (fmt), ##__VA_ARGS__)
#define kvprintf(severity, fmt, va) realkvprintf(__FILE__, __LINE__, (severity), (fmt), (va))
void kp_flush_syscon(void);

#define pr_emerg(fmt, ...)  kprintf(KP_EMERG,   (fmt), ##__VA_ARGS__)
#define pr_alert(fmt, ...)  kprintf(KP_ALERT,   (fmt), ##__VA_ARGS__)
#define pr_crit(fmt, ...)   kprintf(KP_CRIT,    (fmt), ##__VA_ARGS__)
#define pr_error(fmt, ...)  kprintf(KP_ERROR,   (fmt), ##__VA_ARGS__)
#define pr_warn(fmt, ...)   kprintf(KP_WARN,    (fmt), ##__VA_ARGS__)
#define pr_notice(fmt, ...) kprintf(KP_NOTICE,  (fmt), ##__VA_ARGS__)
#define pr_inform(fmt, ...) kprintf(KP_INFORM,  (fmt), ##__VA_ARGS__)
#define pr_debug(fmt, ...)  kprintf(KP_DEBUG,   (fmt), ##__VA_ARGS__)

#define prv_emerg(fmt, va)  kvprintf(KP_EMERG,   (fmt), (va))
#define prv_alert(fmt, va)  kvprintf(KP_ALERT,   (fmt), (va))
#define prv_crit(fmt, va)   kvprintf(KP_CRIT,    (fmt), (va))
#define prv_error(fmt, va)  kvprintf(KP_ERROR,   (fmt), (va))
#define prv_warn(fmt, va)   kvprintf(KP_WARN,    (fmt), (va))
#define prv_notice(fmt, va) kvprintf(KP_NOTICE,  (fmt), (va))
#define prv_inform(fmt, va) kvprintf(KP_INFORM,  (fmt), (va))
#define prv_debug(fmt, va)  kvprintf(KP_DEBUG,   (fmt), (va))

#endif /* _DEMOS_KPRINTF_H_ */
