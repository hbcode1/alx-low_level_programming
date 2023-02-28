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
	int minus; /* represent - signs */
	unsigned int number = 0;
	int len = _strlen(s), i, max = 1;
	/* eleminate signs */
	minus = 0, i = 0;
	for (i = 0; i <= len; i++)
	{
		if (*(s + i) == '-')
			minus++;
		if (*(s + i) >= 48 && *(s + i) <= 57)
			break;
	}
	/* eleminate junk */
	for (i = 0; i <= len; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			while (*(s + i) >= 48 && *(s + i) <= 57)
			{
				max *= 10;
				i++;
			}
			max /= 10;
			break;
		}
	}
	/* get the number */
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
	/* add sign */
	if (minus % 2)
		number = -number;
	return (number);
}
