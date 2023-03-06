#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string.
* @c: character.
* Return:
* - pointer to the first occurrence of the character c in the string s.
* - NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return ('\0');
	}
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
