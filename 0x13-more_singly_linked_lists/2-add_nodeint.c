#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @h: The fist node in listint_t
 * @n: node data.
 *
 * Return:
 *	- the address of the new element.
 *	- NULL if it failed.
 */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (newnode);
	if (h)
	{
		newnode->n = n;
		newnode->next = *h;
		*h = newnode;
	}
	return (newnode);
}
