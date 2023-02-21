#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: value of the last digit
 */
void times_table(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
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
