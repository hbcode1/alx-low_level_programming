#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14,
 * followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	int line, i, j;

	for (line = 0; line < 10; line++)
	{
		for (i = 48; i <= 49; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				if (i > 48)
				{
					_putchar(i);
				}
				_putchar(j);
				if (i == 49 && j == 52)
					break;
			}
		}
		_putchar(10);
	}
}
