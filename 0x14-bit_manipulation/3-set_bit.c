#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: Decimal number to alter.
 * @i: index of bit to set.
 *
 * Return:
 *	- 1 Success.
 *	- (-1) Fails.
 */

int set_bit(ul_i *n, u_i i)
{
	ul_i d = 1; /* define display mask */

	/* case unvalid index */
	if (i > 64)
		return (-1);
	while (i)
	{
		d <<= 1; /* shift left depend on index */
		i--;
	}
	/* bitwise Or bit in index */
	*n |= d;
	return (1);
}
