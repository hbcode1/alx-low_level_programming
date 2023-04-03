#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Head node.
 * @p: insert position.
 * @n: data for new node.
 *
 * Return:
 *	- Address of the new node.
 *	- Null if it failed.
 *	- NULL if impossible.
 */

listint_t *insert_nodeint_at_index(listint_t **h, u_i p, int n)
{
	listint_t *newnode, *right, *left = NULL;
	u_i i = 0;

	/* allocate memory for new node */
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (newnode);
	/* store head node */
	right = *h;
	if (right)
	{
		while (i < p && right)
		{
			left = right;
			right = right->next;
			i++;
		}
		newnode->n = n;
		if (p == 0)
		{
			newnode->next = *h;
			*h = newnode;
			return (newnode);
		}
		else if (p > listint_len(*h))
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = right;
		left->next = newnode;
	}
	return (newnode);
}

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: The first node in listint_h.
 *
 * Return: number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h)
	{
		while (h->next)
		{
			count++;
			h = h->next;
		}
		count++;
	}
	return (count);
}

