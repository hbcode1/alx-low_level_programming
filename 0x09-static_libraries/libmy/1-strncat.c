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
	int len_dest, len_src, i;

	for (len_dest = 0; *(dest + len_dest) != '\0'; len_dest++)
		;
	for (len_src = 0; *(src + len_src) != '\0'; len_src++)
		;
	for (i = 0; i < n && i < len_src; i++)
	{
		*(dest + len_dest + i) = *(src + i);
	}
	*(dest + len_dest + i) = '\0';
	return (dest);
}
