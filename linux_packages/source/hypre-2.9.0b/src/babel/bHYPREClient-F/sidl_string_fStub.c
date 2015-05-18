/*********************************************************************
* File:        sidl_string_fStub.c
* Copyright:   (C) 2001-2004 The Regents of the University of California
* Description: FORTRAN API for arrays of string
* Revision:    $Revision: 1.35 $
*
* AUTOMATICALLY GENERATED BY genfortranarrays.py
**********************************************************************/

#include "sidl_header.h"
#ifndef included_babel_config_h
#include "babel_config.h"
#endif
#include "sidlfortran.h"
#ifndef included_sidlType_h
#include "sidlType.h"
#endif
#ifndef included_sidlArray_h
#include "sidlArray.h"
#endif
#include <stdlib.h>
#include <stddef.h>


#ifndef FORTRAN77_DISABLED
/*---------------------------------------------------------------------*
 * Fortran 77 Array Routines
 *---------------------------------------------------------------------*/


void
SIDLFortran77Symbol(sidl_string__array_createcol_f,
                    SIDL_STRING__ARRAY_CREATECOL_F,
                    sidl_string__array_createCol_f)
  (int32_t *dimen, int32_t lower[], int32_t upper[], int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_createCol(*dimen, lower, upper);
}


void
SIDLFortran77Symbol(sidl_string__array_createrow_f,
                    SIDL_STRING__ARRAY_CREATEROW_F,
                    sidl_string__array_createRow_f)
  (int32_t *dimen, int32_t lower[], int32_t upper[], int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_createRow(*dimen, lower, upper);
}


void
SIDLFortran77Symbol(sidl_string__array_create1d_f,
                    SIDL_STRING__ARRAY_CREATE1D_F,
                    sidl_string__array_create1d_f)
  (int32_t *len, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_create1d(*len);
}


void
SIDLFortran77Symbol(sidl_string__array_create2drow_f,
                    SIDL_STRING__ARRAY_CREATE2DROW_F,
                    sidl_string__array_create2dRow_f)
  (int32_t *m, int32_t *n, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_create2dRow(*m, *n);
}


void
SIDLFortran77Symbol(sidl_string__array_create2dcol_f,
                    SIDL_STRING__ARRAY_CREATE2DCOL_F,
                    sidl_string__array_create2dCol_f)
  (int32_t *m, int32_t *n, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_create2dCol(*m, *n);
}


void
SIDLFortran77Symbol(sidl_string__array_copy_f,
                    SIDL_STRING__ARRAY_COPY_F,
                    sidl_string__array_copy_f)
  (int64_t *src, int64_t *dest)
{
  sidl_string__array_copy((struct sidl_string__array*)(ptrdiff_t)*src,
                      (struct sidl_string__array*)(ptrdiff_t)*dest);
}


void
SIDLFortran77Symbol(sidl_string__array_ensure_f,
                    SIDL_STRING__ARRAY_ENSURE_F,
                    sidl_string__array_ensure_f)
  (int64_t *src, int32_t *dimen, int32_t *ordering, int64_t *result)
{
  *result = (ptrdiff_t)
     sidl_string__array_ensure((struct sidl_string__array*)(ptrdiff_t)*src,
                           *dimen, (int)*ordering);
}


void
SIDLFortran77Symbol(sidl_string__array_smartcopy_f,
                    SIDL_STRING__ARRAY_SMARTCOPY_F,
                    sidl_string__array_smartCopy_f)
  (int64_t *src, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_smartCopy((struct sidl_string__array*)(ptrdiff_t)*src);
}


void
SIDLFortran77Symbol(sidl_string__array_slice_f,
                    SIDL_STRING__ARRAY_SLICE_F,
                    sidl_string__array_slice_f)
  (int64_t *src, int32_t *dimen, int32_t numElem[], int32_t srcStart[],
   int32_t srcStride[], int32_t newStart[], int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_slice((struct sidl_string__array *)(ptrdiff_t)*src,
                         *dimen, numElem, srcStart, srcStride, newStart);
}


void
SIDLFortran77Symbol(sidl_string__array_cast_f,
                    SIDL_STRING__ARRAY_CAST_F,
                    sidl_string__array_cast_f)
  (int64_t *array, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_string__array_cast((struct sidl__array *)(ptrdiff_t)*array);
}


void
SIDLFortran77Symbol(sidl_string__array_iscolumnorder_f,
                    SIDL_STRING__ARRAY_ISCOLUMNORDER_F,
                    sidl_string__array_isColumnOrder_f)
  (int64_t *array, sidl_bool *result)
{
  *result = (
    sidl_string__array_isColumnOrder((struct sidl_string__array *)(ptrdiff_t)*array)
    ? SIDL_F77_TRUE : SIDL_F77_FALSE);
}

void
SIDLFortran77Symbol(sidl_string__array_isroworder_f,
                    SIDL_STRING__ARRAY_ISROWORDER_F,
                    sidl_string__array_isRowOrder_f)
  (int64_t *array, sidl_bool *result)
{
  *result = (
    sidl_string__array_isRowOrder((struct sidl_string__array *)(ptrdiff_t)*array)
    ? SIDL_F77_TRUE : SIDL_F77_FALSE);
}


void
SIDLFortran77Symbol(sidl_string__array_dimen_f,
                    SIDL_STRING__ARRAY_DIMEN_F,
                    sidl_string__array_dimen_f)
  (int64_t *array, int32_t *result)
{
  *result =
    sidl_string__array_dimen((struct sidl_string__array *)(ptrdiff_t)*array);
}


void
SIDLFortran77Symbol(sidl_string__array_stride_f,
                    SIDL_STRING__ARRAY_STRIDE_F,
                    sidl_string__array_stride_f)
  (int64_t *array, int32_t *index, int32_t *result)
{
  *result =
    sidl_string__array_stride((struct sidl_string__array *)(ptrdiff_t)*array, *index);
}


void
SIDLFortran77Symbol(sidl_string__array_lower_f,
                    SIDL_STRING__ARRAY_LOWER_F,
                    sidl_string__array_lower_f)
  (int64_t *array, int32_t*ind, int32_t *result)
{
  *result =
    sidl_string__array_lower((struct sidl_string__array *)(ptrdiff_t)*array, *ind);
}


void
SIDLFortran77Symbol(sidl_string__array_upper_f,
                    SIDL_STRING__ARRAY_UPPER_F,
                    sidl_string__array_upper_f)
  (int64_t *array, int32_t *ind, int32_t *result)
{
  *result =
    sidl_string__array_upper((struct sidl_string__array *)(ptrdiff_t)*array, *ind);
}

void
SIDLFortran77Symbol(sidl_string__array_length_f,
                    SIDL_STRING__ARRAY_LENGTH_F,
                    sidl_string__array_length_f)
  (int64_t *array, int32_t *ind, int32_t *result)
{
  *result =
    sidl_string__array_length((struct sidl_string__array *)(ptrdiff_t)*array, *ind);
}

void
SIDLFortran77Symbol(sidl_string__array_deleteref_f,
                    SIDL_STRING__ARRAY_DELETEREF_F,
                    sidl_string__array_deleteRef_f)
  (int64_t *array)
{
  sidl_string__array_deleteRef((struct sidl_string__array*)(ptrdiff_t)*array);
}


void
SIDLFortran77Symbol(sidl_string__array_addref_f,
                    SIDL_STRING__ARRAY_ADDREF_F,
                    sidl_string__array_addRef_f)
  (int64_t *array)
{
  sidl_string__array_addRef((struct sidl_string__array*)(ptrdiff_t)*array);
}


void
SIDLFortran77Symbol(sidl_string__array_get1_f,
                    SIDL_STRING__ARRAY_GET1_F,
                    sidl_string__array_get1_f)
  (int64_t *array,   int32_t *i1,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get1((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set1_f,
                    SIDL_STRING__ARRAY_SET1_F,
                    sidl_string__array_set1_f)
  (int64_t *array,
   int32_t *i1,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set1((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get2_f,
                    SIDL_STRING__ARRAY_GET2_F,
                    sidl_string__array_get2_f)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get2((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1,
     *i2);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set2_f,
                    SIDL_STRING__ARRAY_SET2_F,
                    sidl_string__array_set2_f)
  (int64_t *array,
   int32_t *i1,
   int32_t *i2,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set2((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   *i2,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get3_f,
                    SIDL_STRING__ARRAY_GET3_F,
                    sidl_string__array_get3_f)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get3((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1,
     *i2,
     *i3);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set3_f,
                    SIDL_STRING__ARRAY_SET3_F,
                    sidl_string__array_set3_f)
  (int64_t *array,
   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set3((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   *i2,
   *i3,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get4_f,
                    SIDL_STRING__ARRAY_GET4_F,
                    sidl_string__array_get4_f)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get4((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1,
     *i2,
     *i3,
     *i4);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set4_f,
                    SIDL_STRING__ARRAY_SET4_F,
                    sidl_string__array_set4_f)
  (int64_t *array,
   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set4((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   *i2,
   *i3,
   *i4,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get5_f,
                    SIDL_STRING__ARRAY_GET5_F,
                    sidl_string__array_get5_f)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get5((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1,
     *i2,
     *i3,
     *i4,
     *i5);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set5_f,
                    SIDL_STRING__ARRAY_SET5_F,
                    sidl_string__array_set5_f)
  (int64_t *array,
   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set5((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   *i2,
   *i3,
   *i4,
   *i5,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get6_f,
                    SIDL_STRING__ARRAY_GET6_F,
                    sidl_string__array_get6_f)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get6((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1,
     *i2,
     *i3,
     *i4,
     *i5,
     *i6);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set6_f,
                    SIDL_STRING__ARRAY_SET6_F,
                    sidl_string__array_set6_f)
  (int64_t *array,
   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set6((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   *i2,
   *i3,
   *i4,
   *i5,
   *i6,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get7_f,
                    SIDL_STRING__ARRAY_GET7_F,
                    sidl_string__array_get7_f)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   int32_t *i7,
   SIDL_F77_String result
   SIDL_F77_STR_NEAR_LEN_DECL(result)
   SIDL_F77_STR_FAR_LEN_DECL(result))
{
  char *tmp =
    sidl_string__array_get7((struct sidl_string__array *)(ptrdiff_t)
	                     *array,
     *i1,
     *i2,
     *i3,
     *i4,
     *i5,
     *i6,
     *i7);
  sidl_copy_c_str(
    SIDL_F77_STR(result),
    (size_t)SIDL_F77_STR_LEN(result),
    tmp);
  free((void *)tmp);
}


void
SIDLFortran77Symbol(sidl_string__array_set7_f,
                    SIDL_STRING__ARRAY_SET7_F,
                    sidl_string__array_set7_f)
  (int64_t *array,
   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   int32_t *i7,
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set7((struct sidl_string__array *)(ptrdiff_t)
                           *array,
   *i1,
   *i2,
   *i3,
   *i4,
   *i5,
   *i6,
   *i7,
   tmp);
  free(tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_get_f,
                    SIDL_STRING__ARRAY_GET_F,
                    sidl_string__array_get_f)
  (int64_t *array, int32_t indices[], SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp =
     sidl_string__array_get((struct sidl_string__array *)(ptrdiff_t)
                            *array, indices);
  sidl_copy_c_str(
    SIDL_F77_STR(value),
    (size_t)SIDL_F77_STR_LEN(value),
    tmp);
  free((void *)tmp);
}

void
SIDLFortran77Symbol(sidl_string__array_set_f,
                    SIDL_STRING__ARRAY_SET_F,
                    sidl_string__array_set_f)
  (int64_t *array, int32_t indices[], 
   SIDL_F77_String value
   SIDL_F77_STR_NEAR_LEN_DECL(value)
   SIDL_F77_STR_FAR_LEN_DECL(value))
{
  char *tmp = sidl_copy_fortran_str(SIDL_F77_STR(value),
                                    (ptrdiff_t)SIDL_F77_STR_LEN(value));
  sidl_string__array_set((struct sidl_string__array *)(ptrdiff_t)
                     *array, indices, tmp);
  free(tmp);
}


#endif /* not FORTRAN77_DISABLED */
