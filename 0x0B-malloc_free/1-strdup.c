#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string.
 * Return:
 * - NULL: if str = NULL or if insufficient memory was available.
 * pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(*str));
	if (s == NULL)
		return (NULL);
	while (*str)
	{
		s[i] = *str;
		str++;
		i++;
	}
	return (s);
}
