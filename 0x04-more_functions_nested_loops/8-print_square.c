#include "main.h"

/**
 * print_square - print a square
 * followed by a new line.
 * @size: dimension of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	/* cols */
	for (i = 1; i <= size; i++)
	{
		/* rows */
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
