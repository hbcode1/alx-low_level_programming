#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * followed by a new line.
 * @n: length of the line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
