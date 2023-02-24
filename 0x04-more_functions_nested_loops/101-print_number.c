#include "main.h"
/**
 * find_length - find length of a number
 * @n: number to check
 * Return: length
 */
int find_length(unsigned int n)
{
	unsigned int l, i;

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
	unsigned int max_l, max, m, i;

	m = n;
	if (n < 0)
	{
		m = -n;
		_putchar(45);
	}

	max_l = find_length(m), max = 1;
	for (i = 1; i < max_l; i++)
	{
		max *= 10;
	}
	for (; max > 1; max /= 10)
	{
		_putchar(m / max + '0');
		m = m % max;
	}
	_putchar(m / max + '0');
}
