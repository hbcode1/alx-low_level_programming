#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Decimal number.
 * @i: target bit index.
 *
 * Return:
 *	- index, starting from 0 of the bit target.
 *	- -1 Failure.
 */

int get_bit(ul_i n, u_i i)
{
	/* Define an unsigned long display mask */
	ul_i d = 1, len = 0, num = n;

	/* get number length */
	while (num > 0)
		len++, num >>= 1;
	len -= 1;
	if (i > len)
		return (0);
	/* shift left mask */
	if (n != 0)
		d <<= len;
	/* loop bits */
	while (d > 0)
	{
		/* get bit value when index and length meet */
		if (len == i)
		{
			if (n & d)
				return (1);
			else
				return (0);
		}
		d >>= 1; /* shift right */
		len--;
	}
	return (-1);
}
