#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * 				using Floyd's cycle-finding algorithm.
 *
 * @h: Head node.
 *
 * Return:
 *	- number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *h)
{
	const listint_t *target, *tmp1 = h, *tmp2 = h, *match;
	int count = 0;

	if (h)
	{
		/* detect loop */
		while (tmp2 && tmp2->next)
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next->next;
			if(tmp1 == tmp2)
				break;
		}
		/* if no loop */
		if (!tmp2 || !tmp2->next)
		{
			while ((target = h))
			{
				printf("[%p] %d\n", (void *)target, target->n);
				count++;
				h = h->next;
			}
			return (count);
		}
		/* if loop */
		/* break loop */
		tmp1 = h;
		while (tmp1 != tmp2)
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}

		match = tmp1;
		target = h;
		while (target != match)
		{
			printf("[%p] %d\n", (void *)target, target->n);
			count++;
			target = target->next;
		}
		printf("[%p] %d\n", (void *)target, target->n);
		target = target->next;
		while (target != match)
		{
			printf("[%p] %d\n",(void *)target, target->n);
			count++;
			target = target->next;
		}
		printf("-> [%p] %d\n", (void *)match, match->n);
		if (h == NULL)
			exit(98);
	}
	return (count);
}

