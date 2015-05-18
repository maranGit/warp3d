/*********************************************************************
* File:        sidl_opaque_fStub.c
* Copyright:   (C) 2001-2004 The Regents of the University of California
* Description: FORTRAN API for arrays of opaque
* Revision:    $Revision: 1.1 $
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
#ifndef FORTRAN90_DISABLED
#include "sidlf90array.h"
#endif
#include <stdlib.h>
#include <stddef.h>


#ifndef FORTRAN90_DISABLED
/*---------------------------------------------------------------------*
 * Fortran 90 Array Routines
 *---------------------------------------------------------------------*/

#include "sidl_opaque_fAbbrev.h"

void
SIDLFortran90Symbol(sidl_opaque__array_createcol_m,
                    SIDL_OPAQUE__ARRAY_CREATECOL_M,
                    sidl_opaque__array_createCol_m)
  (int32_t *dimen, int32_t lower[], int32_t upper[], int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_createCol(*dimen, lower, upper);
}


void
SIDLFortran90Symbol(sidl_opaque__array_createrow_m,
                    SIDL_OPAQUE__ARRAY_CREATEROW_M,
                    sidl_opaque__array_createRow_m)
  (int32_t *dimen, int32_t lower[], int32_t upper[], int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_createRow(*dimen, lower, upper);
}


void
SIDLFortran90Symbol(sidl_opaque__array_create1d_m,
                    SIDL_OPAQUE__ARRAY_CREATE1D_M,
                    sidl_opaque__array_create1d_m)
  (int32_t *len, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_create1d(*len);
}


void
SIDLFortran90Symbol(sidl_opaque__array_create2drow_m,
                    SIDL_OPAQUE__ARRAY_CREATE2DROW_M,
                    sidl_opaque__array_create2dRow_m)
  (int32_t *m, int32_t *n, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_create2dRow(*m, *n);
}


void
SIDLFortran90Symbol(sidl_opaque__array_create2dcol_m,
                    SIDL_OPAQUE__ARRAY_CREATE2DCOL_M,
                    sidl_opaque__array_create2dCol_m)
  (int32_t *m, int32_t *n, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_create2dCol(*m, *n);
}


void
SIDLFortran90Symbol(sidl_opaque__array_ensure_m,
                    SIDL_OPAQUE__ARRAY_ENSURE_M,
                    sidl_opaque__array_ensure_m)
  (int64_t *src, int32_t *dimen, int32_t *ordering, int64_t *result)
{
  *result = (ptrdiff_t)
     sidl_opaque__array_ensure((struct sidl_opaque__array*)(ptrdiff_t)*src,
                           *dimen, (int)*ordering);
}


void
SIDLFortran90Symbol(sidl_opaque__array_smartcopy_m,
                    SIDL_OPAQUE__ARRAY_SMARTCOPY_M,
                    sidl_opaque__array_smartCopy_m)
  (int64_t *src, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_smartCopy((struct sidl_opaque__array*)(ptrdiff_t)*src);
}


void
SIDLFortran90Symbol(sidl_opaque__array_slice_m,
                    SIDL_OPAQUE__ARRAY_SLICE_M,
                    sidl_opaque__array_slice_m)
  (int64_t *src, int32_t *dimen, int32_t numElem[], int32_t srcStart[],
   int32_t srcStride[], int32_t newStart[], int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_slice((struct sidl_opaque__array *)(ptrdiff_t)*src,
                         *dimen, numElem, srcStart, srcStride, newStart);
}


void
SIDLFortran90Symbol(sidl_opaque__array_cast_m,
                    SIDL_OPAQUE__ARRAY_CAST_M,
                    sidl_opaque__array_cast_m)
  (int64_t *array, int32_t *dimen, int64_t *result)
{
  struct sidl_opaque__array *tmp =
    sidl_opaque__array_cast((struct sidl__array *)(ptrdiff_t)*array);
  *result = ((tmp && (sidlArrayDim(tmp) == *dimen)) ? (ptrdiff_t)tmp : 0);
}


void
SIDLFortran90Symbol(sidl_opaque__array_copy_m,
                    SIDL_OPAQUE__ARRAY_COPY_M,
                    sidl_opaque__array_copy_m)
  (int64_t *src, int64_t *dest)
{
  sidl_opaque__array_copy((struct sidl_opaque__array*)(ptrdiff_t)*src,
                      (struct sidl_opaque__array*)(ptrdiff_t)*dest);
}


void
SIDLFortran90Symbol(sidl_opaque__array_iscolumnorder_m,
                    SIDL_OPAQUE__ARRAY_ISCOLUMNORDER_M,
                    sidl_opaque__array_isColumnOrder_m)
  (int64_t *array, sidl_bool *result)
{
  *result = (
    sidl_opaque__array_isColumnOrder((struct sidl_opaque__array *)(ptrdiff_t)*array)
    ? SIDL_F90_TRUE : SIDL_F90_FALSE);
}

void
SIDLFortran90Symbol(sidl_opaque__array_isroworder_m,
                    SIDL_OPAQUE__ARRAY_ISROWORDER_M,
                    sidl_opaque__array_isRowOrder_m)
  (int64_t *array, sidl_bool *result)
{
  *result = (
    sidl_opaque__array_isRowOrder((struct sidl_opaque__array *)(ptrdiff_t)*array)
    ? SIDL_F90_TRUE : SIDL_F90_FALSE);
}


void
SIDLFortran90Symbol(sidl_opaque__array_dimen_m,
                    SIDL_OPAQUE__ARRAY_DIMEN_M,
                    sidl_opaque__array_dimen_m)
  (int64_t *array, int32_t *result)
{
  *result =
    sidl_opaque__array_dimen((struct sidl_opaque__array *)(ptrdiff_t)*array);
}


void
SIDLFortran90Symbol(sidl_opaque__array_stride_m,
                    SIDL_OPAQUE__ARRAY_STRIDE_M,
                    sidl_opaque__array_stride_m)
  (int64_t *array, int32_t *index, int32_t *result)
{
  *result =
    sidl_opaque__array_stride((struct sidl_opaque__array *)(ptrdiff_t)*array, *index);
}


void
SIDLFortran90Symbol(sidl_opaque__array_lower_m,
                    SIDL_OPAQUE__ARRAY_LOWER_M,
                    sidl_opaque__array_lower_m)
  (int64_t *array, int32_t*ind, int32_t *result)
{
  *result =
    sidl_opaque__array_lower((struct sidl_opaque__array *)(ptrdiff_t)*array, *ind);
}


void
SIDLFortran90Symbol(sidl_opaque__array_upper_m,
                    SIDL_OPAQUE__ARRAY_UPPER_M,
                    sidl_opaque__array_upper_m)
  (int64_t *array, int32_t *ind, int32_t *result)
{
  *result =
    sidl_opaque__array_upper((struct sidl_opaque__array *)(ptrdiff_t)*array, *ind);
}

void
SIDLFortran90Symbol(sidl_opaque__array_length_m,
                    SIDL_OPAQUE__ARRAY_LENGTH_M,
                    sidl_opaque__array_length_m)
  (int64_t *array, int32_t *ind, int32_t *result)
{
  *result =
    sidl_opaque__array_length((struct sidl_opaque__array *)(ptrdiff_t)*array, *ind);
}

void
SIDLFortran90Symbol(sidl_opaque__array_deleteref_m,
                    SIDL_OPAQUE__ARRAY_DELETEREF_M,
                    sidl_opaque__array_deleteRef_m)
  (int64_t *array)
{
  sidl_opaque__array_deleteRef((struct sidl_opaque__array*)(ptrdiff_t)*array);
}


void
SIDLFortran90Symbol(sidl_opaque__array_addref_m,
                    SIDL_OPAQUE__ARRAY_ADDREF_M,
                    sidl_opaque__array_addRef_m)
  (int64_t *array)
{
  sidl_opaque__array_addRef((struct sidl_opaque__array*)(ptrdiff_t)*array);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get1_m,
                    SIDL_OPAQUE__ARRAY_GET1_M,
                    sidl_opaque__array_get1_m)
  (int64_t *array,   int32_t *i1,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get1((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set1_m,
                    SIDL_OPAQUE__ARRAY_SET1_M,
                    sidl_opaque__array_set1_m)
  (int64_t *array,   int32_t *i1,
   int64_t *value)
{
  sidl_opaque__array_set1((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get2_m,
                    SIDL_OPAQUE__ARRAY_GET2_M,
                    sidl_opaque__array_get2_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get2((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1,
     *i2);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set2_m,
                    SIDL_OPAQUE__ARRAY_SET2_M,
                    sidl_opaque__array_set2_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int64_t *value)
{
  sidl_opaque__array_set2((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   *i2,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get3_m,
                    SIDL_OPAQUE__ARRAY_GET3_M,
                    sidl_opaque__array_get3_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get3((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1,
     *i2,
     *i3);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set3_m,
                    SIDL_OPAQUE__ARRAY_SET3_M,
                    sidl_opaque__array_set3_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int64_t *value)
{
  sidl_opaque__array_set3((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   *i2,
   *i3,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get4_m,
                    SIDL_OPAQUE__ARRAY_GET4_M,
                    sidl_opaque__array_get4_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get4((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1,
     *i2,
     *i3,
     *i4);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set4_m,
                    SIDL_OPAQUE__ARRAY_SET4_M,
                    sidl_opaque__array_set4_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int64_t *value)
{
  sidl_opaque__array_set4((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   *i2,
   *i3,
   *i4,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get5_m,
                    SIDL_OPAQUE__ARRAY_GET5_M,
                    sidl_opaque__array_get5_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get5((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1,
     *i2,
     *i3,
     *i4,
     *i5);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set5_m,
                    SIDL_OPAQUE__ARRAY_SET5_M,
                    sidl_opaque__array_set5_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int64_t *value)
{
  sidl_opaque__array_set5((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   *i2,
   *i3,
   *i4,
   *i5,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get6_m,
                    SIDL_OPAQUE__ARRAY_GET6_M,
                    sidl_opaque__array_get6_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get6((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1,
     *i2,
     *i3,
     *i4,
     *i5,
     *i6);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set6_m,
                    SIDL_OPAQUE__ARRAY_SET6_M,
                    sidl_opaque__array_set6_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   int64_t *value)
{
  sidl_opaque__array_set6((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   *i2,
   *i3,
   *i4,
   *i5,
   *i6,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get7_m,
                    SIDL_OPAQUE__ARRAY_GET7_M,
                    sidl_opaque__array_get7_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   int32_t *i7,
   int64_t *result)
{
  *result = (ptrdiff_t)
    sidl_opaque__array_get7((struct sidl_opaque__array *)(ptrdiff_t)*array,
     *i1,
     *i2,
     *i3,
     *i4,
     *i5,
     *i6,
     *i7);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set7_m,
                    SIDL_OPAQUE__ARRAY_SET7_M,
                    sidl_opaque__array_set7_m)
  (int64_t *array,   int32_t *i1,
   int32_t *i2,
   int32_t *i3,
   int32_t *i4,
   int32_t *i5,
   int32_t *i6,
   int32_t *i7,
   int64_t *value)
{
  sidl_opaque__array_set7((struct sidl_opaque__array *)(ptrdiff_t)*array,
   *i1,
   *i2,
   *i3,
   *i4,
   *i5,
   *i6,
   *i7,
   (void *)(ptrdiff_t)*value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_set_m,
                    SIDL_OPAQUE__ARRAY_SET_M,
                    sidl_opaque__array_set_m)
  (int64_t *array, int32_t indices[], int64_t *value)
{
  sidl_opaque__array_set((struct sidl_opaque__array *)(ptrdiff_t)*array, indices, (void *)(ptrdiff_t) *value);
}


void
SIDLFortran90Symbol(sidl_opaque__array_get_m,
                    SIDL_OPAQUE__ARRAY_GET_M,
                    sidl_opaque__array_get_m)
  (int64_t *array, int32_t indices[], int64_t *value)
{
  *value = (ptrdiff_t)
     sidl_opaque__array_get((struct sidl_opaque__array *)(ptrdiff_t)*array, indices);
}



#endif /* not FORTRAN90_DISABLED */
