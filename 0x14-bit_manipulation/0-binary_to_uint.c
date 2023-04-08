#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binary number to convert.
 *
 * Return:
 *	- The converted number (unsigned int).
 *	- 0:
 *		- If unvalid convertion.
 *		- If b null.
 */

u_i binary_to_uint(const char *b)
{
	int i = 0;
	u_i d = 0;

	if (b)
	{
		while (*(b + i) != '\0')
		{
			if (*(b + i) != '0')
			{
				/* case unvalid character */
				if (*(b + i) != '1')
					return (0);
				/* shift left and bitwise OR */
				d = d << 1, d = d | 1;
			}
			else
				/* shift left */
				d = d << 1;
			i++;
		}
	}
	return (d);
}
