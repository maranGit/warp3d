/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision: 1.5 $
 ***********************************************************************EHEADER*/




/* ******************************************************************** */
/* See the file COPYRIGHT for a complete copyright notice, contact      */
/* person and disclaimer.                                               */        
/* ******************************************************************** */

/* ******************************************************************** */
/* Data structure to hold the most basic information about a finite     */
/* element (used locally only).                                         */
/* ******************************************************************** */
/* Author        : Charles Tong (LLNL) and Raymond Tuminaro (SNL)       */
/* Date          : April, 1998                                          */
/* ******************************************************************** */

#ifndef _MLELMNTAGX_
#define _MLELMNTAGX_

#include <stdio.h>
/* #include <stdlib.h> */

#include "ml_common.h"
#include "ml_memory.h"

/* ******************************************************************* */
/*  ndim      : dimension of the grid                                  */
/*  Nvertices : number of vertices in the element                      */
/*  vertices  : an array storing the node number of the vertices       */
/*  x,y,z     : stores the coordinates of the vertices                 */
/* ------------------------------------------------------------------- */

typedef struct ML_ElementAGX_Struct
 {
   int          ndim;
   int          Nvertices;
   int          *vertices;
   double       *x, *y, *z;

} ML_ElementAGX;

/* ******************************************************************** */
/* functions to manipulate the Simple_element structure                 */
/* -------------------------------------------------------------------- */

#ifndef ML_CPP
#ifdef __cplusplus
extern "C" 
{
#endif
#endif

extern int  ML_ElementAGX_Create(ML_ElementAGX**, int, int);
extern int  ML_ElementAGX_Destroy(ML_ElementAGX **);
extern int  ML_ElementAGX_Reuse(ML_ElementAGX *);
extern int  ML_ElementAGX_Print(ML_ElementAGX *);
extern int  ML_ElementAGX_Load_VertCoordinate
             (ML_ElementAGX*, int, double, double, double);
extern int  ML_ElementAGX_Get_VertCoordinate
             (ML_ElementAGX *, int, int*, double *, double *, double *);
extern int  ML_ElementAGX_ComposeCandidates
             (ML_ElementAGX *, int, double *, int *, int *, int *, int *);

#ifndef ML_CPP
#ifdef __cplusplus
}
#endif
#endif

#endif

