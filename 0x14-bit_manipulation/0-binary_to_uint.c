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
		/* eleminat first 0s */
		while (*b != '\0')
		{
			if (*b == '0')
				while (*b == '0')
					b++;
			break;
		}
		while (*(b + i) != '\0')
		{
			if (*(b + i) != '0')
			{
				/* case unvalid character */
				if (*(b + i) != '1')
					return (0);
				d = d << 1, d = d | 1;
			}
			else
				d = d << 1;
			i++;
		}
	}
	return (d);
}
