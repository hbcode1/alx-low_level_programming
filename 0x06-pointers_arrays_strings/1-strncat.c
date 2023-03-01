#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @src: source string
 * @dest: destination string,
 * @n: bytes,
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src, i, j = 0;

	for (len_dest = 0; *(dest + len_dest) != '\0'; len_dest++)
		;
	for (len_src = 0; *(src + len_src) != '\0'; len_src++)
		;
	for (i = len_dest; i < (len_src + n) && j < len_src; i++)
	{
		*(dest + i) = *(src + j);
		j++;
		*(dest + i + 1) = '\0';
	}
	return (dest);
}
