#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: to be b
 * @b: to be a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *c = NULL;

	*c = *a;
	*a = *b;
	*b = *c;

}
