#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @h: Head node.
 *
 * Return:
 *	- number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *h)
{
	const listint_t *tmp, *match;
	int count = 0, i = 0;

	if (h)
	{
		/* store head */
		tmp = h;
		while (tmp->next)
		{
			if (h == NULL)
				exit(98);
			/* reset match and macth index */
			match = h, i = 0;
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
			count++;
			while (i < count)
			{
				/* find first match */
				if (match == tmp)
				{
					printf("-> [%p] %d\n", (void *)tmp, tmp->n);
					return (count);
				}
				match = match->next;
				i++;
			}
		}
	}
	return (count);
}

