#include "main.h"

/**
* _memcpy - function copies
* @n: bytes
* from
* @src: memory area
* to
* @dest: memory area
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, x = n;

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

