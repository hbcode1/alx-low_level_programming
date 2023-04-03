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
		if (i > listint_len(h))
			return (NULL);
		while (h->next)
		{
			while (j < i)
			{
				h = h->next;
				j++;
			}
			if (h)
				return (h);
		}
	}
	return (h);
}
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: The first node in listint_h.
 *
 * Return: number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h)
	{
		while (h->next)
		{
			count++;
			h = h->next;
		}
		count++;
	}
	return (count);
}
