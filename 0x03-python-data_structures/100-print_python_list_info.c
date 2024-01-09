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
	long int size, x;
	PyListObject *file;
	PyObject *element;

	s = Py_SIZE(p);
	printf("[*] Size of the Python List = %ld\n", s);

	file = (PyListObject *)p;
	printf("[*] Allocated = %ld\n", file->allocated);

	for (x = 0; x < size; x++)
	{
		element = PyList_GetItem(p, x);
		printf("Element %ld: %s\n", x, Py_TYPE(element)->tp_name);
	}
}
