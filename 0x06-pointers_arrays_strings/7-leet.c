#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string to encode.
 * Return: encoded string.
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char lowers[] = "aeotlAEOTL";
	char mozart[] = "4307143071";

	while (str[j] != '\0')
	{
		while (str[j] != lowers[i] && lowers[i] != '\0')
		{
			i++;
		}
		if (str[j] == lowers[i])
		{
			str[j] = mozart[i];
		}
		i = 0;
		j++;
	}
	return (str);
}
