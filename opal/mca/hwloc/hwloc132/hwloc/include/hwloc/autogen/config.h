/* opal/mca/hwloc/hwloc132/hwloc/include/hwloc/autogen/config.h.  Generated from config.h.in by configure.  */
/* -*- c -*-
 * Copyright © 2009 CNRS
 * Copyright © 2009-2010 inria.  All rights reserved.
 * Copyright © 2009-2012 Université Bordeaux 1
 * Copyright © 2009-2011 Cisco Systems, Inc.  All rights reserved.
 * See COPYING in top-level directory.
 */

/* The configuration file */

#ifndef HWLOC_CONFIG_H
#define HWLOC_CONFIG_H

#if (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
# define __hwloc_restrict __restrict
#else
# if __STDC_VERSION__ >= 199901L
#  define __hwloc_restrict restrict
# else
#  define __hwloc_restrict
# endif
#endif

#if defined(_MSC_VER) || defined(__HP_cc)
#  define __hwloc_inline __inline
#else
#  define __hwloc_inline __inline__
#endif

/*
 * Note: this is public.  We can not assume anything from the compiler used
 * by the application and thus the HWLOC_HAVE_* macros below are not
 * fetched from the autoconf result here. We only automatically use a few
 * well-known easy cases.
 */

/* Maybe before gcc 2.95 too */
#ifdef HWLOC_HAVE_ATTRIBUTE_UNUSED
#define __HWLOC_HAVE_ATTRIBUTE_UNUSED HWLOC_HAVE_ATTRIBUTE_UNUSED 
#elif defined(__GNUC__)
# define __HWLOC_HAVE_ATTRIBUTE_UNUSED (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#else
# define __HWLOC_HAVE_ATTRIBUTE_UNUSED 0
#endif
#if __HWLOC_HAVE_ATTRIBUTE_UNUSED
# define __hwloc_attribute_unused __attribute__((__unused__))
#else
# define __hwloc_attribute_unused
#endif

#ifdef HWLOC_HAVE_ATTRIBUTE_MALLOC
#define __HWLOC_HAVE_ATTRIBUTE_MALLOC HWLOC_HAVE_ATTRIBUTE_MALLOC 
#elif defined(__GNUC__)
# define __HWLOC_HAVE_ATTRIBUTE_MALLOC (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96))
#else
# define __HWLOC_HAVE_ATTRIBUTE_MALLOC 0
#endif
#if __HWLOC_HAVE_ATTRIBUTE_MALLOC
# define __hwloc_attribute_malloc __attribute__((__malloc__))
#else
# define __hwloc_attribute_malloc
#endif

#ifdef HWLOC_HAVE_ATTRIBUTE_CONST
#define __HWLOC_HAVE_ATTRIBUTE_CONST HWLOC_HAVE_ATTRIBUTE_CONST 
#elif defined(__GNUC__)
# define __HWLOC_HAVE_ATTRIBUTE_CONST (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#else
# define __HWLOC_HAVE_ATTRIBUTE_CONST 0
#endif
#if __HWLOC_HAVE_ATTRIBUTE_CONST
# define __hwloc_attribute_const __attribute__((__const__))
#else
# define __hwloc_attribute_const
#endif

#ifdef HWLOC_HAVE_ATTRIBUTE_PURE
#define __HWLOC_HAVE_ATTRIBUTE_PURE HWLOC_HAVE_ATTRIBUTE_PURE 
#elif defined(__GNUC__)
# define __HWLOC_HAVE_ATTRIBUTE_PURE (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96))
#else
# define __HWLOC_HAVE_ATTRIBUTE_PURE 0
#endif
#if __HWLOC_HAVE_ATTRIBUTE_PURE
# define __hwloc_attribute_pure __attribute__((__pure__))
#else
# define __hwloc_attribute_pure
#endif

#ifdef HWLOC_HAVE_ATTRIBUTE_DEPRECATED
#define __HWLOC_HAVE_ATTRIBUTE_DEPRECATED HWLOC_HAVE_ATTRIBUTE_DEPRECATED 
#elif defined(__GNUC__)
# define __HWLOC_HAVE_ATTRIBUTE_DEPRECATED (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3))
#else
# define __HWLOC_HAVE_ATTRIBUTE_DEPRECATED 0
#endif
#if __HWLOC_HAVE_ATTRIBUTE_DEPRECATED
# define __hwloc_attribute_deprecated __attribute__((__deprecated__))
#else
# define __hwloc_attribute_deprecated
#endif

#ifdef HWLOC_C_HAVE_VISIBILITY
# if HWLOC_C_HAVE_VISIBILITY
#  define HWLOC_DECLSPEC __attribute__((__visibility__("default")))
# else
#  define HWLOC_DECLSPEC
# endif
#else
# define HWLOC_DECLSPEC
#endif

/* Defined to 1 on Linux */
#define HWLOC_LINUX_SYS 1

/* Defined to 1 if the CPU_SET macro works */
#define HWLOC_HAVE_CPU_SET 1

/* Defined to 1 if you have the `windows.h' header. */
/* #undef HWLOC_HAVE_WINDOWS_H */
#define hwloc_pid_t pid_t
#define hwloc_thread_t pthread_t

#ifdef HWLOC_HAVE_WINDOWS_H

#  include <windows.h>
typedef DWORDLONG hwloc_uint64_t;

#else /* HWLOC_HAVE_WINDOWS_H */

#  ifdef hwloc_thread_t
#    include <pthread.h>
#  endif /* hwloc_thread_t */

/* Defined to 1 if you have the <stdint.h> header file. */
#  define HWLOC_HAVE_STDINT_H 1

#  include <unistd.h>
#  ifdef HWLOC_HAVE_STDINT_H
#    include <stdint.h>
#  endif
typedef uint64_t hwloc_uint64_t;

#endif /* HWLOC_HAVE_WINDOWS_H */

/* Whether we need to re-define all the hwloc public symbols or not */
#define HWLOC_SYM_TRANSFORM 1

/* The hwloc symbol prefix */
#define HWLOC_SYM_PREFIX opal_hwloc132_

/* The hwloc symbol prefix in all caps */
#define HWLOC_SYM_PREFIX_CAPS OPAL_HWLOC132_

#endif /* HWLOC_CONFIG_H */
