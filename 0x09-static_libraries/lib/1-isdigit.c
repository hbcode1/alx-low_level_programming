#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to check.
 * Return: 1 True, 0 False.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
