#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 *				using Floyd's cycle detection algorithm.
 *
 * @h: Head node.
 *
 * Return:
 *	- The address of the node where the loop starts.
 *	- NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *h)
{
	listint_t *i = h, *j = h;

	if (h)
	{
		/* detect loop */
		while (j && j->next)
		{
			i = i->next;
			j = j->next->next;
			if (i == j)
				break;
		}
		/* if no loop */
		if (!j || !j->next)
			return (NULL);
		/* find start of loop */
		i = h;
		if (i != j)
		{
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (i);
		}

	}
	return (NULL);
}
