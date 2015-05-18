/*
 * File:          bHYPRE_Euclid_Module.h
 * Symbol:        bHYPRE.Euclid-v1.0.0
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   expose a constructor for the Python wrapper
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * External clients need an entry point to wrap a pointer
 * to an instance of bHYPRE.Euclid.
 * This header files defines two methods that such clients
 * will need.
 *     bHYPRE_Euclid__import
 *         This should be called in the client's init
 *         module method.
 *     bHYPRE_Euclid__wrap
 *         This will wrap an IOR in a Python object.
 */

#ifndef included_bHYPRE_Euclid_MODULE
#define included_bHYPRE_Euclid_MODULE

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
struct bHYPRE_Euclid__object;
struct bHYPRE_Euclid__array;
struct sidl_BaseInterface__object;

#define bHYPRE_Euclid__wrap_NUM 0
#define bHYPRE_Euclid__wrap_RETURN PyObject *
#define bHYPRE_Euclid__wrap_PROTO (struct bHYPRE_Euclid__object *sidlobj)

#define bHYPRE_Euclid__convert_NUM 1
#define bHYPRE_Euclid__convert_RETURN int
#define bHYPRE_Euclid__convert_PROTO (PyObject *obj, struct bHYPRE_Euclid__object **sidlobj)

#define bHYPRE_Euclid__convert_python_array_NUM 2
#define bHYPRE_Euclid__convert_python_array_RETURN int
#define bHYPRE_Euclid__convert_python_array_PROTO (PyObject *obj, struct bHYPRE_Euclid__array **sidlarray)

#define bHYPRE_Euclid__convert_sidl_array_NUM 3
#define bHYPRE_Euclid__convert_sidl_array_RETURN PyObject *
#define bHYPRE_Euclid__convert_sidl_array_PROTO (struct sidl__array *sidlarray)

#define bHYPRE_Euclid__weakRef_NUM 4
#define bHYPRE_Euclid__weakRef_RETURN PyObject *
#define bHYPRE_Euclid__weakRef_PROTO (struct bHYPRE_Euclid__object *sidlobj)

#define bHYPRE_Euclid_deref_NUM 5
#define bHYPRE_Euclid_deref_RETURN void
#define bHYPRE_Euclid_deref_PROTO (struct bHYPRE_Euclid__object *sidlobj)

#define bHYPRE_Euclid__newRef_NUM 6
#define bHYPRE_Euclid__newRef_RETURN PyObject *
#define bHYPRE_Euclid__newRef_PROTO (struct bHYPRE_Euclid__object *sidlobj)

#define bHYPRE_Euclid__addRef_NUM 7
#define bHYPRE_Euclid__addRef_RETURN void
#define bHYPRE_Euclid__addRef_PROTO (struct bHYPRE_Euclid__object *sidlobj)

#define bHYPRE_Euclid_PyType_NUM 8
#define bHYPRE_Euclid_PyType_RETURN PyTypeObject *
#define bHYPRE_Euclid_PyType_PROTO (void)

#define bHYPRE_Euclid__connectI_NUM 9
#define bHYPRE_Euclid__connectI_RETURN struct bHYPRE_Euclid__object* 
#define bHYPRE_Euclid__connectI_PROTO (const char* url, sidl_bool ar, struct sidl_BaseInterface__object ** _ex)

#define bHYPRE_Euclid__rmicast_NUM 10
#define bHYPRE_Euclid__rmicast_RETURN struct bHYPRE_Euclid__object* 
#define bHYPRE_Euclid__rmicast_PROTO (void* bi, struct sidl_BaseInterface__object ** _ex)

#define bHYPRE_Euclid__API_NUM 11

#ifdef bHYPRE_Euclid_INTERNAL

#define bHYPRE_Euclid__import() ;


/*
 * This declaration is not for clients.
 */

static bHYPRE_Euclid__wrap_RETURN
bHYPRE_Euclid__wrap
bHYPRE_Euclid__wrap_PROTO;

static bHYPRE_Euclid__convert_RETURN
bHYPRE_Euclid__convert
bHYPRE_Euclid__convert_PROTO;

static bHYPRE_Euclid__convert_python_array_RETURN
bHYPRE_Euclid__convert_python_array
bHYPRE_Euclid__convert_python_array_PROTO;

static bHYPRE_Euclid__convert_sidl_array_RETURN
bHYPRE_Euclid__convert_sidl_array
bHYPRE_Euclid__convert_sidl_array_PROTO;

static bHYPRE_Euclid__weakRef_RETURN
bHYPRE_Euclid__weakRef
bHYPRE_Euclid__weakRef_PROTO;

static bHYPRE_Euclid_deref_RETURN
bHYPRE_Euclid_deref
bHYPRE_Euclid_deref_PROTO;

static bHYPRE_Euclid__newRef_RETURN
bHYPRE_Euclid__newRef
bHYPRE_Euclid__newRef_PROTO;

static bHYPRE_Euclid__addRef_RETURN
bHYPRE_Euclid__addRef
bHYPRE_Euclid__addRef_PROTO;

static bHYPRE_Euclid_PyType_RETURN
bHYPRE_Euclid_PyType
bHYPRE_Euclid_PyType_PROTO;

#else

static void **bHYPRE_Euclid__API = NULL;

#define bHYPRE_Euclid__wrap \
  (*((bHYPRE_Euclid__wrap_RETURN (*) \
  bHYPRE_Euclid__wrap_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__wrap_NUM])))

#define bHYPRE_Euclid__convert \
  (*((bHYPRE_Euclid__convert_RETURN (*) \
  bHYPRE_Euclid__convert_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__convert_NUM])))

#define bHYPRE_Euclid__convert_python_array \
  (*((bHYPRE_Euclid__convert_python_array_RETURN (*) \
  bHYPRE_Euclid__convert_python_array_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__convert_python_array_NUM])))

#define bHYPRE_Euclid__convert_sidl_array \
  (*((bHYPRE_Euclid__convert_sidl_array_RETURN (*) \
  bHYPRE_Euclid__convert_sidl_array_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__convert_sidl_array_NUM])))

#define bHYPRE_Euclid__weakRef \
  (*((bHYPRE_Euclid__weakRef_RETURN (*) \
  bHYPRE_Euclid__weakRef_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__weakRef_NUM])))

#define bHYPRE_Euclid_deref \
  (*((bHYPRE_Euclid_deref_RETURN (*) \
  bHYPRE_Euclid_deref_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid_deref_NUM])))

#define bHYPRE_Euclid__newRef \
  (*((bHYPRE_Euclid__newRef_RETURN (*) \
  bHYPRE_Euclid__newRef_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__newRef_NUM])))

#define bHYPRE_Euclid__addRef \
  (*((bHYPRE_Euclid__addRef_RETURN (*) \
  bHYPRE_Euclid__addRef_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__addRef_NUM])))

#define bHYPRE_Euclid_PyType \
  (*((bHYPRE_Euclid_PyType_RETURN (*) \
  bHYPRE_Euclid_PyType_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid_PyType_NUM])))

#define bHYPRE_Euclid__connectI \
  (*((bHYPRE_Euclid__connectI_RETURN (*) \
  bHYPRE_Euclid__connectI_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__connectI_NUM])))

#define bHYPRE_Euclid__rmicast \
  (*((bHYPRE_Euclid__rmicast_RETURN (*) \
  bHYPRE_Euclid__rmicast_PROTO) \
  (bHYPRE_Euclid__API \
  [bHYPRE_Euclid__rmicast_NUM])))

#ifdef HAVE_PTHREAD
#define bHYPRE_Euclid__import() \
{ \
  pthread_mutex_t __sidl_pyapi_mutex = PTHREAD_MUTEX_INITIALIZER; \
  pthread_mutex_lock(&__sidl_pyapi_mutex); \
  if (!bHYPRE_Euclid__API) { \
    PyObject *module = PyImport_ImportModule("bHYPRE.Euclid"); \
    if (module != NULL) { \
      PyObject *module_dict = PyModule_GetDict(module); \
      PyObject *c_api_object = \
        PyDict_GetItemString(module_dict, "_C_API"); \
      if (c_api_object && PyCObject_Check(c_api_object)) { \
        bHYPRE_Euclid__API = \
          (void **)PyCObject_AsVoidPtr(c_api_object); \
      } \
      else { fprintf(stderr, "babel: bHYPRE_Euclid__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
      Py_DECREF(module); \
    } else { fprintf(stderr, "babel: bHYPRE_Euclid__import failed to import its module.\n"); }\
  }\
  pthread_mutex_unlock(&__sidl_pyapi_mutex); \
  pthread_mutex_destroy(&__sidl_pyapi_mutex); \
}
#else /* !HAVE_PTHREAD */
#define bHYPRE_Euclid__import() \
if (!bHYPRE_Euclid__API) { \
  PyObject *module = PyImport_ImportModule("bHYPRE.Euclid"); \
  if (module != NULL) { \
    PyObject *module_dict = PyModule_GetDict(module); \
    PyObject *c_api_object = \
      PyDict_GetItemString(module_dict, "_C_API"); \
    if (c_api_object && PyCObject_Check(c_api_object)) { \
      bHYPRE_Euclid__API = \
        (void **)PyCObject_AsVoidPtr(c_api_object); \
    } \
    else { fprintf(stderr, "babel: bHYPRE_Euclid__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
    Py_DECREF(module); \
  } else { fprintf(stderr, "babel: bHYPRE_Euclid__import failed to import its module.\n"); }\
}
#endif /* HAVE_PTHREAD */

#endif

#ifdef __cplusplus
}
#endif

#endif
