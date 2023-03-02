#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes a string using caesar cipher ROT13 encryption
 * @str: string to encode.
 * Return: encoded string.
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char letters[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	while (str[j] != '\0')
	{
		while (str[j] != letters[i] && letters[i] != '\0')
		{
			i++;
		}
		if (str[j] == letters[i])
		{
			str[j] = rot13[i];
		}
		i = 0;
		j++;
	}
	return (str);
}
