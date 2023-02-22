#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * 
 * Return: void
 *
 * @n: starting point
 */
void print_times_table(int n)
{
	int i, j, c;
	
	if (n < 15 && n >= 0)
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			c = i * j;
			if (j > 0)
			{
				_putchar(44);
				_putchar(32);
				if (!(c / 10))
					_putchar(32);
			}
			if (c / 10)
			{
				_putchar((c / 10) % 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar(10);

	}
}
