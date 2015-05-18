/*
 * File:          sidl_rmi_ProtocolException_Module.h
 * Symbol:        sidl.rmi.ProtocolException-v0.9.15
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_rmi_ProtocolException_Module.h,v 1.2 2007/09/27 19:35:23 painter Exp $
 * Description:   expose a constructor for the Python wrapper
 * 
 * Copyright (c) 2000-2002, The Regents of the University of California.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by the Components Team <components@llnl.gov>
 * All rights reserved.
 * 
 * This file is part of Babel. For more information, see
 * http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
 * for Our Notice and the LICENSE file for the GNU Lesser General Public
 * License.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License (as published by
 * the Free Software Foundation) version 2.1 dated February 1999.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
 * conditions of the GNU Lesser General Public License for more details.
 * 
 * You should have recieved a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * External clients need an entry point to wrap a pointer
 * to an instance of sidl.rmi.ProtocolException.
 * This header files defines two methods that such clients
 * will need.
 *     sidl_rmi_ProtocolException__import
 *         This should be called in the client's init
 *         module method.
 *     sidl_rmi_ProtocolException__wrap
 *         This will wrap an IOR in a Python object.
 * This object can be used as an exception. It exports
 * a Python exception type that may be needed as well.
 *     sidl_rmi_ProtocolException__type
 *         A Python exception type corresponding to
 *         this object type.
 * Here is the pattern for throwing an exception:
 *   PyObject *obj = sidl_rmi_ProtocolException__wrap(ex);
 *   PyErr_SetObject(sidl_rmi_ProtocolException__type, obj);
 *   Py_XDECREF(obj);
 */

#ifndef included_sidl_rmi_ProtocolException_MODULE
#define included_sidl_rmi_ProtocolException_MODULE

#include <Python.h>
#include "sidlType.h"
#ifdef HAVE_PTHREAD
#include <pthread.h>
#endif /* HAVE_PTHREAD */

#ifdef __cplusplus
extern "C" {
#endif

struct sidl__array;

/* Forward declaration of IOR structure */
struct sidl_rmi_ProtocolException__object;
struct sidl_rmi_ProtocolException__array;
struct sidl_BaseInterface__object;

#define sidl_rmi_ProtocolException__wrap_NUM 0
#define sidl_rmi_ProtocolException__wrap_RETURN PyObject *
#define sidl_rmi_ProtocolException__wrap_PROTO (struct sidl_rmi_ProtocolException__object *sidlobj)

#define sidl_rmi_ProtocolException__convert_NUM 1
#define sidl_rmi_ProtocolException__convert_RETURN int
#define sidl_rmi_ProtocolException__convert_PROTO (PyObject *obj, struct sidl_rmi_ProtocolException__object **sidlobj)

#define sidl_rmi_ProtocolException__convert_python_array_NUM 2
#define sidl_rmi_ProtocolException__convert_python_array_RETURN int
#define sidl_rmi_ProtocolException__convert_python_array_PROTO (PyObject *obj, struct sidl_rmi_ProtocolException__array **sidlarray)

#define sidl_rmi_ProtocolException__convert_sidl_array_NUM 3
#define sidl_rmi_ProtocolException__convert_sidl_array_RETURN PyObject *
#define sidl_rmi_ProtocolException__convert_sidl_array_PROTO (struct sidl__array *sidlarray)

#define sidl_rmi_ProtocolException__weakRef_NUM 4
#define sidl_rmi_ProtocolException__weakRef_RETURN PyObject *
#define sidl_rmi_ProtocolException__weakRef_PROTO (struct sidl_rmi_ProtocolException__object *sidlobj)

#define sidl_rmi_ProtocolException_deref_NUM 5
#define sidl_rmi_ProtocolException_deref_RETURN void
#define sidl_rmi_ProtocolException_deref_PROTO (struct sidl_rmi_ProtocolException__object *sidlobj)

#define sidl_rmi_ProtocolException__newRef_NUM 6
#define sidl_rmi_ProtocolException__newRef_RETURN PyObject *
#define sidl_rmi_ProtocolException__newRef_PROTO (struct sidl_rmi_ProtocolException__object *sidlobj)

#define sidl_rmi_ProtocolException__addRef_NUM 7
#define sidl_rmi_ProtocolException__addRef_RETURN void
#define sidl_rmi_ProtocolException__addRef_PROTO (struct sidl_rmi_ProtocolException__object *sidlobj)

#define sidl_rmi_ProtocolException_PyType_NUM 8
#define sidl_rmi_ProtocolException_PyType_RETURN PyTypeObject *
#define sidl_rmi_ProtocolException_PyType_PROTO (void)

#define sidl_rmi_ProtocolException__connectI_NUM 9
#define sidl_rmi_ProtocolException__connectI_RETURN struct sidl_rmi_ProtocolException__object* 
#define sidl_rmi_ProtocolException__connectI_PROTO (const char* url, sidl_bool ar, struct sidl_BaseInterface__object ** _ex)

#define sidl_rmi_ProtocolException__rmicast_NUM 10
#define sidl_rmi_ProtocolException__rmicast_RETURN struct sidl_rmi_ProtocolException__object* 
#define sidl_rmi_ProtocolException__rmicast_PROTO (void* bi, struct sidl_BaseInterface__object ** _ex)

#define sidl_rmi_ProtocolException__type_NUM 11

#define sidl_rmi_ProtocolException__API_NUM 12

#ifdef sidl_rmi_ProtocolException_INTERNAL

#define sidl_rmi_ProtocolException__import() ;


/*
 * This declaration is not for clients.
 */

static sidl_rmi_ProtocolException__wrap_RETURN
sidl_rmi_ProtocolException__wrap
sidl_rmi_ProtocolException__wrap_PROTO;

static sidl_rmi_ProtocolException__convert_RETURN
sidl_rmi_ProtocolException__convert
sidl_rmi_ProtocolException__convert_PROTO;

static sidl_rmi_ProtocolException__convert_python_array_RETURN
sidl_rmi_ProtocolException__convert_python_array
sidl_rmi_ProtocolException__convert_python_array_PROTO;

static sidl_rmi_ProtocolException__convert_sidl_array_RETURN
sidl_rmi_ProtocolException__convert_sidl_array
sidl_rmi_ProtocolException__convert_sidl_array_PROTO;

static sidl_rmi_ProtocolException__weakRef_RETURN
sidl_rmi_ProtocolException__weakRef
sidl_rmi_ProtocolException__weakRef_PROTO;

static sidl_rmi_ProtocolException_deref_RETURN
sidl_rmi_ProtocolException_deref
sidl_rmi_ProtocolException_deref_PROTO;

static sidl_rmi_ProtocolException__newRef_RETURN
sidl_rmi_ProtocolException__newRef
sidl_rmi_ProtocolException__newRef_PROTO;

static sidl_rmi_ProtocolException__addRef_RETURN
sidl_rmi_ProtocolException__addRef
sidl_rmi_ProtocolException__addRef_PROTO;

static sidl_rmi_ProtocolException_PyType_RETURN
sidl_rmi_ProtocolException_PyType
sidl_rmi_ProtocolException_PyType_PROTO;

static PyObject *
sidl_rmi_ProtocolException__type;

#else

static void **sidl_rmi_ProtocolException__API = NULL;

#define sidl_rmi_ProtocolException__wrap \
  (*((sidl_rmi_ProtocolException__wrap_RETURN (*) \
  sidl_rmi_ProtocolException__wrap_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__wrap_NUM])))

#define sidl_rmi_ProtocolException__convert \
  (*((sidl_rmi_ProtocolException__convert_RETURN (*) \
  sidl_rmi_ProtocolException__convert_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__convert_NUM])))

#define sidl_rmi_ProtocolException__convert_python_array \
  (*((sidl_rmi_ProtocolException__convert_python_array_RETURN (*) \
  sidl_rmi_ProtocolException__convert_python_array_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__convert_python_array_NUM])))

#define sidl_rmi_ProtocolException__convert_sidl_array \
  (*((sidl_rmi_ProtocolException__convert_sidl_array_RETURN (*) \
  sidl_rmi_ProtocolException__convert_sidl_array_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__convert_sidl_array_NUM])))

#define sidl_rmi_ProtocolException__weakRef \
  (*((sidl_rmi_ProtocolException__weakRef_RETURN (*) \
  sidl_rmi_ProtocolException__weakRef_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__weakRef_NUM])))

#define sidl_rmi_ProtocolException_deref \
  (*((sidl_rmi_ProtocolException_deref_RETURN (*) \
  sidl_rmi_ProtocolException_deref_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException_deref_NUM])))

#define sidl_rmi_ProtocolException__newRef \
  (*((sidl_rmi_ProtocolException__newRef_RETURN (*) \
  sidl_rmi_ProtocolException__newRef_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__newRef_NUM])))

#define sidl_rmi_ProtocolException__addRef \
  (*((sidl_rmi_ProtocolException__addRef_RETURN (*) \
  sidl_rmi_ProtocolException__addRef_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__addRef_NUM])))

#define sidl_rmi_ProtocolException_PyType \
  (*((sidl_rmi_ProtocolException_PyType_RETURN (*) \
  sidl_rmi_ProtocolException_PyType_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException_PyType_NUM])))

#define sidl_rmi_ProtocolException__connectI \
  (*((sidl_rmi_ProtocolException__connectI_RETURN (*) \
  sidl_rmi_ProtocolException__connectI_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__connectI_NUM])))

#define sidl_rmi_ProtocolException__rmicast \
  (*((sidl_rmi_ProtocolException__rmicast_RETURN (*) \
  sidl_rmi_ProtocolException__rmicast_PROTO) \
  (sidl_rmi_ProtocolException__API \
  [sidl_rmi_ProtocolException__rmicast_NUM])))

#define sidl_rmi_ProtocolException__type \
  ((PyObject *)(sidl_rmi_ProtocolException__API[sidl_rmi_ProtocolException__type_NUM]))

#ifdef HAVE_PTHREAD
#define sidl_rmi_ProtocolException__import() \
{ \
  pthread_mutex_t __sidl_pyapi_mutex = PTHREAD_MUTEX_INITIALIZER; \
  pthread_mutex_lock(&__sidl_pyapi_mutex); \
  if (!sidl_rmi_ProtocolException__API) { \
    PyObject *module = PyImport_ImportModule("sidl.rmi.ProtocolException"); \
    if (module != NULL) { \
      PyObject *module_dict = PyModule_GetDict(module); \
      PyObject *c_api_object = \
        PyDict_GetItemString(module_dict, "_C_API"); \
      if (c_api_object && PyCObject_Check(c_api_object)) { \
        sidl_rmi_ProtocolException__API = \
          (void **)PyCObject_AsVoidPtr(c_api_object); \
      } \
      else { fprintf(stderr, "babel: sidl_rmi_ProtocolException__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
      Py_DECREF(module); \
    } else { fprintf(stderr, "babel: sidl_rmi_ProtocolException__import failed to import its module.\n"); }\
  }\
  pthread_mutex_unlock(&__sidl_pyapi_mutex); \
  pthread_mutex_destroy(&__sidl_pyapi_mutex); \
}
#else /* !HAVE_PTHREAD */
#define sidl_rmi_ProtocolException__import() \
if (!sidl_rmi_ProtocolException__API) { \
  PyObject *module = PyImport_ImportModule("sidl.rmi.ProtocolException"); \
  if (module != NULL) { \
    PyObject *module_dict = PyModule_GetDict(module); \
    PyObject *c_api_object = \
      PyDict_GetItemString(module_dict, "_C_API"); \
    if (c_api_object && PyCObject_Check(c_api_object)) { \
      sidl_rmi_ProtocolException__API = \
        (void **)PyCObject_AsVoidPtr(c_api_object); \
    } \
    else { fprintf(stderr, "babel: sidl_rmi_ProtocolException__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
    Py_DECREF(module); \
  } else { fprintf(stderr, "babel: sidl_rmi_ProtocolException__import failed to import its module.\n"); }\
}
#endif /* HAVE_PTHREAD */

#endif

#ifdef __cplusplus
}
#endif

#endif
