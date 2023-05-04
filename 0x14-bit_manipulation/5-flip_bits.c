#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another.
 *
 * @d1: Decimal number1.
 * @d2: Decimal number2.
 *
 * Return:
 *	- number of bits to flip.
 */

u_i flip_bits(ul_i d1, ul_i d2)
{
	u_i n = 0;
	ul_i dm = 1;

	while (dm > 0)
	{
		if ((d1 & dm && !(d2 & dm)) || (!(d1 & dm) && d2 & dm))
			n++;
		dm <<= 1;
	}
	return (n);
}
