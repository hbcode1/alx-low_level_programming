#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* *string_nconcat - concatenates two strings.
*
* @s1: first string.
* @s2: second string.
* @n: bytes of s2.
* Return:
* - pointer to a newly allocated space in memory, which contains s1,
*	followed by the first n bytes of s2, and null terminated : Success.
* - NULL : Failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int i, size;

/* case NULL */
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
/* case n greater or equal to the length of s2 */
if (n >= strlen(s2) + 1)
	n = strlen(s2) + 1;
/* get the allocation size */
size = sizeof(char) * (strlen(s1) + n);
/* allocate pointer to new string*/
new_str = malloc(size);
/* handle malloc return */
if (new_str == NULL)
	return (NULL);
/* copy the first string */
for (i = 0; i < strlen(s1); i++)
	new_str[i] = s1[i];
/* copy the second string */
for (; i < size; i++)
{
new_str[i] = *s2;
s2++;
}
/* terminate with null */
new_str[i] = '\0';
return (new_str);
}
