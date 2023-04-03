#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 *
 * @h: The first node in listint_t
 */

void free_listint2(listint_t **h)
{
	listint_t *curr_node;

	if (h)
	{
		while ((curr_node = *h) != NULL)
		{
			*h = (*h)->next;
			free(curr_node);
		}
		*h = NULL;
	}
}
