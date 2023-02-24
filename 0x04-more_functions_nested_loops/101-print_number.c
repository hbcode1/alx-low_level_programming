#include "main.h"
/**
 * find_length - find length of a number
 * @n: number to check
 * Return: length
 */
int find_length(int n)
{
	int l, i;
	l = 1;
	for (i = 0; i <= 10; i++)
	{
		if (n / 10)
		{
			l = l + 1;
			n = n / 10;
		}
		else
			break;
	}
	return (l);
}
/**
 * print_number - prints an integer.
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	int max_l, i, max;

	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}

	max_l = find_length(n), max = 1;
	for (i = 1; i < max_l; i++)
	{
		max *= 10;
	}
	for (; max > 1; max /= 10)
	{
		_putchar(n / max + '0');
		n = n % max;
	}
	_putchar(n / max + '0');
}
