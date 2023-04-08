#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to be converted.
 *
 */

void print_binary(ul_i n)
{
	/* Define a display mask = 2147483648*/
	u_i d = 1 << 31, l = 1, res, zero = 0;

	while (l <= 32)
	{
		/* bitwise OR number and display mask */
		if (n & d)
			res = '1'; /* to print 1 */
		else
			res = '0'; /* to pritn 0 */
		/* Handle leading 0s */
		if (res == '1')
			zero = 1;
		if (zero)
			_putchar(res);
		n <<= 1, l++; /* shift left */
	}
	/* case 0 and LONG_MIN*/
	if (!zero)
		_putchar('0');
}
