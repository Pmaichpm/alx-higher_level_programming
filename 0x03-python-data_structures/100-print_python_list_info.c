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
	long int area = PyList_Size(p);
	int x;
	PyListObject *obt = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", area);
	printf("[*] Allocated = %li\n", obt->allocated);
	for (x = 0; x < area; x++)
		printf("Element %i: %s\n", x, Py_TYPE(obt->ob_item[x])->tp_name);
}
