/*
 This is part of the OTF library. Copyright by ZIH, TU Dresden 2005-2012.
 Authors: Andreas Knuepfer, Holger Brunst, Ronny Brendel, Thomas Kriebitzsch
*/

/** 
 *  @file OTF_inttypes_unix.h
 *
 *  @brief Deals with all data type related issues.
 *
 *  \ingroup misc
 */


#ifndef OTF_INTTYPES_UNIX_H
#define OTF_INTTYPES_UNIX_H

#define OTF_HAVE_STDINT_H 1
#define OTF_HAVE_INTTYPES_H 1
#define OTF_SIZEOF_LONG 8

#ifdef __sgi
#	undef OTF_HAVE_STDINT_H
#	define OTF_HAVE_STDINT_H 0
#endif

#if OTF_HAVE_STDINT_H
#	include <stdint.h>
#elif OTF_HAVE_INTTYPES_H
#	include <inttypes.h>
#else /* OTF_HAVE_STDINT_H || OTF_HAVE_INTTYPES_H */

	typedef signed char                     int8_t;
	typedef signed short int                int16_t;
	typedef signed int                      int32_t;
#	if OTF_SIZEOF_LONG == 8
		typedef signed long int         int64_t;
#	else /* OTF_SIZEOF_LONG */
		typedef signed long long int    int64_t;
#	endif /* OTF_SIZEOF_LONG */

	typedef unsigned char                   uint8_t;
	typedef unsigned short int              uint16_t;
	typedef unsigned int                    uint32_t;
#	if OTF_SIZEOF_LONG == 8
		typedef unsigned long int       uint64_t;
#	else /* OTF_SIZEOF_LONG */
		typedef unsigned long long int  uint64_t;
#	endif /* OTF_SIZEOF_LONG */

#endif /* OTF_HAVE_INTTYPES_H || OTF_HAVE_STDINT_H */

#ifdef UINT64_MAX
#	define OTF_UINT64_MAX UINT64_MAX
#else /* UINT64_MAX */
#	define OTF_UINT64_MAX (uint64_t)-1
#endif /* UINT64_MAX */

#endif /* OTF_INTTYPES_UNIX_H */
