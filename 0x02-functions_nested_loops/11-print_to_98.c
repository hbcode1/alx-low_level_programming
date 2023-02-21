#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * Return: void
 * @n: starting point
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d", i);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d", i);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				printf("%d", i);
			}

		}
	}
	_putchar(10);
}
