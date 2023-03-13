#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return:
 * - pointer to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2,
 * and null terminated
 * - pointer to an empty string if NULL is passed.
 * - NULL: Failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int len_s1 = 0, len_s2 = 0, i = 0, j = 0, len;

	if (s1 == NULL)
		s1 = "";
	/* get s1 length */
	while (*(s1 + len_s1) != '\0')
	{
		len_s1++;
	}
	if (s2 == NULL)
		s2 = "";
	/* get s2 length */
	while (*(s2 + len_s2) != '\0')
	{
		len_s2++;
	}
	/* new pointer length */
	len = len_s1 - 1 + len_s2;
	res = malloc(sizeof(*s1) * len);
	/* fill res with s1 without exluding \0 */
	while (i < len_s1)
	{
		res[i] = s1[i];
		i++;
	}
	/* continue filling res with s2 including \0*/
	while (i < len)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	return (res);
}
