#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line, to stdout.
 * @a: array of integers to be printed
 * @n: number of elements of the @a
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n)
			printf("\, ");
	}
	printf("\n");
}

