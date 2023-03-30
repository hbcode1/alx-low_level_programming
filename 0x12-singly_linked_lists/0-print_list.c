#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * 
 * @h: pointer to the next list to print.
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	while (h->next)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		count++;
		h = h->next;
	}
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		count++;
	return (count);
}
