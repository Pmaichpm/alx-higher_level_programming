#include "lists.h"

/**
 * check_cycle - checks for a cycle in linked list
 * @list: linked list
 *
 * Return: 1 if there is cycle, 0 if no cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *steady = list;
	listint_t *swift = list;

	if (!list)
		return (0);

	while (steady && swift && swift->next)
	{
		steady = steady->next;
		swift = swift->next->next;
		if (steady == swift)
			return (1);
	}

	return (0);
}
