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
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	/* get str length */
	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	s = malloc(sizeof(*str) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		s[i] = *str;
		str++;
		i++;
	}
	return (s);
}
