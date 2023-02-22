#include "main.h"
#include <stdio.h>
/**
 * print_1024 - computes and prints the sum
 * of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: void
 */
void print_1024(void)
{
	int i;

	for (i = 1 ; i < 1024; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
