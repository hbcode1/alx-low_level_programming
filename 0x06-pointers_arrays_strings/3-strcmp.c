#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: to compare
 * @s2: string to compare to
 * Return: integer indicating the result of the comparison:
 *        0: equal
 *        negative: s1 is less than s2
 *        positive s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = *s1 - *s2;
	return (i);
}

