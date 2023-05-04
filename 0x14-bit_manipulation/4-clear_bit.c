#include "main.h"

/**
 * clear_bit - clear bit at a given index.
 *
 * @n: Decimal number to alter.
 * @i: index of bit to clear.
 *
 * Return:
 *	- 1 Success.
 *	- (-1) Fails.
 */

int clear_bit(ul_i *n, u_i i)
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
	/* bitwise OR bit in index : set bit to 1 */
	/* if at least 1 is 1*/
	*n |= d;
	/* bitwise XOR bit in index : then set to 0 */
	/* if same */
	*n ^= d;
	return (1);
}
