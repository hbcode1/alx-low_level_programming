#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * followed by a new line.
 * @n: length of the line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
