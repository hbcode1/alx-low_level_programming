#include "main.h"

/**
 * wildcmp - compares two strings.
 * Return:
 * - 1 if the strings can be considered identical
 * - 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	return (0);
}
