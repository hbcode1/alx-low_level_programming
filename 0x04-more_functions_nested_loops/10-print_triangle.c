#include "main.h"

/**
 * print_triangle - draws a triangle, followed by a new line.
 * @size: dimension of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	/* cols */
	for (i = 1; i <= size; i++)
	{
		/* rows */
		/* spaces */
		for (j = 1; j <= size - i; j++)
		{
			_putchar(32);
		}

		/* hashs */
		for (j = 1; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
