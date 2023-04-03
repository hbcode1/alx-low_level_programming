#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @h: The first node in listint_h.
 * @n : node data.
 *
 * Return:
 *	- The address of the new element.
 *	- NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *temp_tail, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (newnode);
	newnode->n = n;
	newnode->next = NULL;
	if (!*h)
	{
		*h = newnode;
		return (*h);
	}
	temp_tail = *h;
	while (temp_tail->next)
	{
		temp_tail = temp_tail->next;
	}
	temp_tail->next = newnode;
	return (newnode);
}
