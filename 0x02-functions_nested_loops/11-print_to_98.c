#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * Return: void
 * @n: start point
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				_putchar(44);
				_putchar(32);
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i)
			if (i != 98)
				_putchar(44);
				_putchar(32);
		}
	}
	_putchar(10);
}
