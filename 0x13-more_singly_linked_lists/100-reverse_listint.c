#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @h: Head node.
 *
 * Return:
 *	- pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **h)
{
	listint_t *tmp1 = NULL, *tmp2 = NULL;

	if (*h)
	{
		while (*h)
		{
			tmp1 = (*h)->next;
			(*h)->next = tmp2;
			tmp2 = *h;
			*h = tmp1;
		}
		*h = tmp2;
	}
	return (*h);
}
