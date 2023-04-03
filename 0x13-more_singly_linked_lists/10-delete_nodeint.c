#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index p of a linked list.
 * @h: Head node.
 * @p: Index of node position to be deleted.
 *
 * Return:
 *	- 1 Success.
 *	- -1 Failure.
 */
int delete_nodeint_at_index(listint_t **h, u_i p)
{
	listint_t *right, *target, *temp;
	u_i i = 0, len = listint_len(*h);

	/* store right node */
	if (h)
	{
		right = *h;
		if (p == 0 && len > 0)
		{
			target = right;
			temp = right->next;
			*h = temp;
			free(target);
			return (1);
		}
		while (i < p - 1 && right)
		{
			right = right->next;
			i++;
		}
		if (p >= len)
			return (-1);
		target = right->next;
		right->next = right->next->next;
		free(target);
		return (1);
	}
	return (-1);
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
