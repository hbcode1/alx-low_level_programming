#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to be converted.
 *
 */

void print_binary(ul_i n)
{
	/* Define an unsigned long display mask */
	ul_i d = 1, len = 0, num = n;

	/* get number length */
	while (num > 0)
		len++, num >>= 1;
	/* case 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* shift left mask */
	d <<= (len - 1);
	/* loop bits */
	while (d > 0)
	{
		/* bitwise OR number and display mask */
		if (n & d)
			_putchar('1');
		else
			_putchar('0');
		d >>= 1; /* shift right */
	}
}
