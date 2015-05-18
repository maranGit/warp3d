/*********************************************************************
* File:        sidl_array_fStub.c
* Copyright:   (C) 2001-2004 The Regents of the University of California
* Description: FORTRAN API for arrays of unspecified elements
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


void
SIDLFortran90Symbol(sidl__array_type_m,
                    SIDL__ARRAY_TYPE_M,
                    sidl__array_type_m)
  (int64_t *array, int32_t *result)
{
  *result =
    sidl__array_type((struct sidl__array *)(ptrdiff_t)*array);
}


void
SIDLFortran90Symbol(sidl__array_smartcopy_m,
                    SIDL__ARRAY_SMARTCOPY_M,
                    sidl__array_smartCopy_m)
  (int64_t *src, int64_t *result)
{
  *result = (ptrdiff_t)
    sidl__array_smartCopy((struct sidl__array*)(ptrdiff_t)*src);
}


void
SIDLFortran90Symbol(sidl__array_iscolumnorder_m,
                    SIDL__ARRAY_ISCOLUMNORDER_M,
                    sidl__array_isColumnOrder_m)
  (int64_t *array, sidl_bool *result)
{
  *result = (
    sidl__array_isColumnOrder((struct sidl__array *)(ptrdiff_t)*array)
    ? SIDL_F90_TRUE : SIDL_F90_FALSE);
}

void
SIDLFortran90Symbol(sidl__array_isroworder_m,
                    SIDL__ARRAY_ISROWORDER_M,
                    sidl__array_isRowOrder_m)
  (int64_t *array, sidl_bool *result)
{
  *result = (
    sidl__array_isRowOrder((struct sidl__array *)(ptrdiff_t)*array)
    ? SIDL_F90_TRUE : SIDL_F90_FALSE);
}


void
SIDLFortran90Symbol(sidl__array_dimen_m,
                    SIDL__ARRAY_DIMEN_M,
                    sidl__array_dimen_m)
  (int64_t *array, int32_t *result)
{
  *result =
    sidl__array_dimen((struct sidl__array *)(ptrdiff_t)*array);
}


void
SIDLFortran90Symbol(sidl__array_stride_m,
                    SIDL__ARRAY_STRIDE_M,
                    sidl__array_stride_m)
  (int64_t *array, int32_t *index, int32_t *result)
{
  *result =
    sidl__array_stride((struct sidl__array *)(ptrdiff_t)*array, *index);
}


void
SIDLFortran90Symbol(sidl__array_lower_m,
                    SIDL__ARRAY_LOWER_M,
                    sidl__array_lower_m)
  (int64_t *array, int32_t*ind, int32_t *result)
{
  *result =
    sidl__array_lower((struct sidl__array *)(ptrdiff_t)*array, *ind);
}


void
SIDLFortran90Symbol(sidl__array_upper_m,
                    SIDL__ARRAY_UPPER_M,
                    sidl__array_upper_m)
  (int64_t *array, int32_t *ind, int32_t *result)
{
  *result =
    sidl__array_upper((struct sidl__array *)(ptrdiff_t)*array, *ind);
}

void
SIDLFortran90Symbol(sidl__array_length_m,
                    SIDL__ARRAY_LENGTH_M,
                    sidl__array_length_m)
  (int64_t *array, int32_t *ind, int32_t *result)
{
  *result =
    sidl__array_length((struct sidl__array *)(ptrdiff_t)*array, *ind);
}

void
SIDLFortran90Symbol(sidl__array_deleteref_m,
                    SIDL__ARRAY_DELETEREF_M,
                    sidl__array_deleteRef_m)
  (int64_t *array)
{
  sidl__array_deleteRef((struct sidl__array*)(ptrdiff_t)*array);
}


void
SIDLFortran90Symbol(sidl__array_addref_m,
                    SIDL__ARRAY_ADDREF_M,
                    sidl__array_addRef_m)
  (int64_t *array)
{
  sidl__array_addRef((struct sidl__array*)(ptrdiff_t)*array);
}



#endif /* not FORTRAN90_DISABLED */
