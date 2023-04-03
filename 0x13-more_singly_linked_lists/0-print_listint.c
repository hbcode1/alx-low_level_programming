#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 *
 * @h: fist node int listint_t.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h)
	{
		while (h->next)
		{
			printf("%d\n", (*h).n);
			count++;
			h = h->next;
		}
			printf("%d\n", (*h).n);
			count++;
	}
	return (count);
}
