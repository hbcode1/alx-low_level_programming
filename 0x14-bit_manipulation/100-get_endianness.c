#include "main.h"
/**
 * get_endianness - checks the endianness.
 * The way the machine stores multibyte data-types,
 * like integers, floats...
 * There are 2 types
 *		- Little endian: Last byte of bin are stored first.
 *		- Big endian: Fisrt byte of bin are stored first.
 * Return:
 *	- 0 for Big endian.
 *	- 1 for little endian.
 */
int get_endianness(void)
{
	/* define and initialise multibyte data-type variable */
	u_i integer = 0x01020304;
	/* store first byte of integer */
	char *ptr = (char *)&integer;
	/* int s = sizeof(integer);*/

	/* while (s) */
	/*	printf("%.2x ", ((char *)&integer)[s]), s--;*/
	return (*c);
}

