#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * 
 * @h: pointer to the fisrt element in list_t list.
 *
 * Return: Number f elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	while (h->next)
	{
		count++;
		h = h->next;
	}
		count++;
	return (count);
}
