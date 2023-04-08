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
	u_i d = 1 << 31, l = 1, len = 0;
	ul_i num = n;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	/* Get length of the number */
	while (!(num & d) && len <= 32)
		len++, num <<= 1;
	/* shift display mask right */
	while (len > 0)
		d >>= 1, len--, l++;
	/* bitwise OR number and display mask */
	while (l <= 32)
	{
		if (n & d)
			_putchar(49); /* if 1 print 1 */
		else
			_putchar(48); /* if 0 print 0 */
		n <<= 1, l++; /* sheft left */
	}
}
