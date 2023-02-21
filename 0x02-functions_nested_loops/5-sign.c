#include "main.h"
/**
 *
 * print_sign - prints the sign of a number
 *
 * Return: 1 positive, 0 null, -1 negative
 * @n: The number to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(46);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
