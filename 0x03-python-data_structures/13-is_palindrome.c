#include "lists.h"
#include <stdio.h>

/**
 * is_palindrome - checks for a palindrome in linked list
 * @head: double pointer to linked list
 *
 * Return: 1 if yes, 0 if not
 */

int is_palindrome(listint_t **head)
{
	listint_t *hd, *txt, *bk, *ext;
	listint_t *x = NULL, *point, *ix, *ixx;

	if (!head || !*head)
	return (1);

	hd = *head;
	if (hd->follow != NULL)
	{
		for (bk = hd, txt = hd; bk != NULL && bk->follow != NULL;
			ext = txt, txt = txt->follow)
			bk = bk->follow->follow;

	if (bk != NULL)
	{
		x = txt;
		txt = txt->follow;
	}
	ext->follow = NULL;
	point = txt;
	ix = reverse_listint(&point);
	for (ixx = *head; ixx; ix = ix->follow, ixx = ixx->follow)
	{
	if (ixx->n != ix->n)
		return (0);
	}
	if (x == NULL)
	ext->next = point;
	else
	{
	ext->follow = x;
	x->follow = point;
	}
	}

	return (1);
}

/**
 * reverse_listint - Reverses a linked list in pladce
 * @head: Pointer to a pointer pointing to the first item in the list
 *
 * Return: The new head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *follow = NULL, *ex = NULL;

	if (!head || !*head)
	return (NULL);

	while ((*head)->follow)
	{
	follow = (*head)->follow;

	(*head)->follow = ex;

	ex = *head;
	*head = follow;
	}

	(*head)->follow = ex;

	return (*head);
}
