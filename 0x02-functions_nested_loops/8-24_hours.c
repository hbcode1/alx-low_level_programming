#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: value of the last digit
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(10);
		}
	}
}