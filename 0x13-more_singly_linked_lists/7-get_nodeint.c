#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @h: Head node.
 * @i: Node index.
 *
 * Return:
 *	- The nth node.
 *	- NULL if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *h, u_i i)
{
	u_i j = 0;

	if (h)
	{
		while (h->next)
		{
			while (j < i)
			{
				h = h->next;
				j++;
			}
			if (h)
				return (h);
			return (NULL);
		}
	}
	return (h);
}
