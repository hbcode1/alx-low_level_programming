#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *
 * @h: Head node.
 *
 * Return:
 *	- 0 if list is empty.
 *	- sum of n of all nodes.
 */

int sum_listint(listint_t *h)
{
	int sum = 0;

	if (h)
	{
		while (h->next)
		{
			sum += h->n;
			h = h->next;
		}
		sum += h->n;
	}
	return (sum);
}
