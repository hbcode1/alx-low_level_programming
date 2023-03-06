#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: bytes consist of.
* Return: number of bytes in the initial segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != *(s + i) && *(accept + j) != '\0')
		{
			printf("%c, %c\n",*(accept + j), *(s + i));
			j++;
		}
		if (*(s + i) == *(accept + j))
		{
			len++;
			j = 0;
		}
		i++;
	}
	return (len);
}
