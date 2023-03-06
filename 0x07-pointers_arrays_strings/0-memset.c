#include "main.h"

/**
* _memset - fills
* @n: the first bytes
* of
* @s: the memory area pointed to by
* with
* @b:the constant byte.
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
