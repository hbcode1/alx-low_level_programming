#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list.
 *
 * @head: pointer to the fisrt element in list_t list.
 */
void free_list(list_t *head)
{
	list_t *curr_node;

	while ((curr_node = head) != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
