#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: address of a pointer to The first element of a list_t list.
 * Return:
 *	- address of the new element.
 *	- Null (Failure).
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
	}
	else if (!str)
	{
		free(new->str);
		free(new);
	}
	return (*head);
}
