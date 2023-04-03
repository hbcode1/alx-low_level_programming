#include "lists.h"
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
