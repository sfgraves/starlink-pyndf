#if !defined( HDS_TYPES_INCLUDED ) /* hds_types.h already included? */
#define HDS_TYPES_INCLUDED 1
/*
*+
*  Name:
*     hds_types.h

*  Type of Module:
*     C include file.

*  Purpose:
*     Define public HDS-specific data types.

*  Description:
*     This file defines the public types that are used in the HDS
*     public API.

*  Authors:
*     TIMJ: Tim Jenness (JAC, Hawaii)
*     ./make-hds-types program

*  History:
*     21-Oct-2005 (TIMJ):
*        Original version of C program (via auto-generation).
*     TODAY (./make-hds-types):
*        Generated
*     No further changes -- do not edit this file

*-
*/

#include <stddef.h>

#include <inttypes.h>

/* Public type for dealing with HDS locators */
/* The contents of the struct are private to HDS. The only public */
/* part is the HDSLoc typedef. Never use 'struct LOC' directly.   */
/* We hide this definition during the build of the library itself */
#ifndef HDS_INTERNAL_INCLUDES
typedef struct LOC HDSLoc;
#endif

/* HDS Wild card matching structure */
/* This is a stub structure. The C API for this routine is unstable */
typedef struct HDSWild {
   int wild;
} HDSWild;

/* Public type for specifying HDS dimensions */
typedef int hdsdim;
#define HDS_DIM_FORMAT "d"
#define HDS_DIM_TYPE I

/* Helper macros for HDS dimensions. For instance HDSDIM_TYPE(datFred)
   expands to datFredK or datFredI, as required. */
#define HDS_GLUE_HELPER(a,b) a##b
#define HDS_GLUE(a,b) HDS_GLUE_HELPER(a,b)
#define HDSDIM_TYPE(a) HDS_GLUE(a,HDS_DIM_TYPE)

/* Public type for Logical type */
typedef int hdsbool_t;
#define HDS_BOOL_FORMAT "d"

#endif /* _INCLUDED */

