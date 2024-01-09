#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - Print list info about Python
 *
 * @p: pointer
 *
 * Return: void
 */

void print_python_list_info(PyObject *p)
{
	long int s = PyList_Size(p);
	int x;
	PyListObject *item = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", s);
	printf("[*] Allocated = %li\n", itm->allocated);
	for (x = 0; x < s; x++)
		printf("Element %i: %s\n", x, Py_TYPE(itm->ob_item[x])->tp_name);
