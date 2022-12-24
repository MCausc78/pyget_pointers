#define PY_SSIZE_T_CLEAN
#include <Python.h>

extern PyObject *extra_get_rbp(PyObject *, PyObject *);
extern PyObject *extra_get_rsp(PyObject *, PyObject *);

static PyMethodDef ExtraMethods[] = {
	{ "get_rbp", extra_get_rbp, METH_VARARGS, "get rbp register" },
	{ "get_rsp", extra_get_rsp, METH_VARARGS, "get rsp register" },
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef extramodule = {
	PyModuleDef_HEAD_INIT,
	"extra",
	NULL,
	-1,
	ExtraMethods
};

PyMODINIT_FUNC PyInit_module(void) {
	return PyModule_Create(&extramodule);
}
