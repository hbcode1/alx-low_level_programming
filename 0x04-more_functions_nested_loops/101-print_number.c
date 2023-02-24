#include "main.h"

/**
 * print_number - prints an integer.
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int i, j, k;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	for (i = 100000000; i > 9; i /= 10)
	{
		if (n == i)
		{
			_putchar(49);
			for (k = n; k > 9; k /= 10)
			{
				_putchar(48);
			}
			break;
		}
		else if (n / i && n > i)
		{
			_putchar((n / i) + '0');
			n = n % i;
			if (n < i / 10)
			{
				for (j = i / 10; j > 9; j /= 10)
				{
					if (n < j)
						_putchar(48);
				}
			}
		}
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
}
