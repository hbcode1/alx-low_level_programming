#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings.
 * append the
 * @src: source string
 * to the
 * @dest: destination string,
 * overwriting the terminating null byte at the end of dest,
 * and the adds a terminating null byte.
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src, i;

	for (len_dest = 0; *(dest + len_dest) != '\0'; len_dest++)
		;
	for (len_src = 0; *(src + len_src) != '\0'; len_src++)
		;
	for (i = 0; i < len_src && *(src + i) != '\0'; i++)
	{
		*(dest + len_dest + i) = *(src + i);
		*(dest + len_dest + i + 1) = '\0';
	}
	return (dest);
}
