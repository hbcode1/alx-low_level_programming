#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list.
 *
 * @head: pointer to the fisrt element in list_t list.
 */
void free_list(list_t *head)
{
	if (head)
	{
		while (head->next)
		{
			free(head->str);
			head = head->next;
		}
		free(head);
	}
}
