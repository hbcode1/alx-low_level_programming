#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 * Return: converted value of s
 */
int _atoi(char *s)
{
	unsigned int number = 0, max = 1;
	int len = _strlen(s), i, minus;
	/* get sign and number length */
	minus = 1, i = 0;
	for (i = 0; i <= len; i++)
	{
		if (*(s + i) == '-')
			minus *= -1;
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			i++;
			while (*(s + i) >= 48 && *(s + i) <= 57)
			{
				max *= 10;
				i++;
			}
			break;
		}
	}
	/* get number */
	for (i = 0; i <= len; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			while (*(s + i) >= 48 && *(s + i) <= 57)
			{
				number += (*(s + i) - '0') * max;
				max /= 10;
				i++;
			}
			break;
		}
	}
	number *= minus;
	return (number);
}
