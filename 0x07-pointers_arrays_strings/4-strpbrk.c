#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* locates the first occurrence in
* @s: string
* of any of the bytes in
* @accept: string.
* Return:
*  - a pointer to the byte in s that matches one of the bytes in accept
*  - NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (*s != *(accept + i) && *(accept + i) != '\0')
		{
			i++;
		}
		if (*s == *(accept + i))
		{
			break;
		}
		i = 0;
		s++;
	}
	return (s);
}
