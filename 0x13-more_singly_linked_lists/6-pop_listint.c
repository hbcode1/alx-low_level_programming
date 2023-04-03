#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @h: head node.
 *
 * Return:
 *	- head node’s data (n).
 *	- 0 if the linked list is empty.
 */

int pop_listint(listint_t **h)
{
	listint_t *temp_hanger;
	int t = 0;

	if (h)
	{
		t = (*h)->n;
		target = *h;
		temp_hanger = (*h)->next;
		*h = temp_hanger;
		free(target);
	}
	return (t);
}

