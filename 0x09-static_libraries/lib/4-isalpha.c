#include "main.h"
/**
 * _isalpha - Function checks for alphabetic characters.
 *
 * Return: 1 (True), 0 (False).
 * @c: The character to check.
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
