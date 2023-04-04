#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 *
 * @h: Head node.
 *
 * Return:
 *	- The size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *target, *tmp1 = *h, *tmp2 = *h, *link;
	int s = 0;

	if (h)
	{
		/* detect loop */
		while (tmp2 && tmp2->next)
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next->next;
			if ((tmp1 == tmp2) && tmp1 != NULL)
				break;
		}
		/* break loop */
		if (tmp1 == tmp2)
		{
			link = tmp1;
			tmp1 = *h;

			while (tmp1 != tmp2)
			{
				link = tmp2;
				tmp1 = tmp1->next;
				tmp2 = tmp2->next;
			}
			link->next = NULL;
		}
		/* free loop-free list */
		while ((target = *h))
		{
			*h = (*h)->next;
			s++;
			free(target);
		}
	}
	return (s);
}
