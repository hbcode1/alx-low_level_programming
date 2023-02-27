#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: to be b
 * @b: to be a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x; /* init x */
	int *c; /* add a pointer to int */

	c = &x; /* store addrs of x in c */
	*c = *a;	/* replace addrs of x by addrx of a */
	*a = *b;
	*b = *c;

}
