#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: string pointed
 * @dest: buffer pointed
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src) + 1, i;

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
