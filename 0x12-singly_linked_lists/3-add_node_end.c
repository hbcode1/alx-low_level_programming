#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at theend of a list_t list.
 * @head: address of a pointer to The first element of a list_t list.
 * @str: data for list_t.
 * Return:
 *	- address of the new element.
 *	- Null (Failure).
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
