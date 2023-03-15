#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* count_words - counts words in string separated by spaces.
* @str: string.
* Return: number of words.
*/
int count_words(char *str)
{
	int i, count;

	while (*(str + i) != '\0')
	{
		while (*(str + i) == ' ' && *(str + i) != '\0')
		{
			i++;
		}
		if (*(str + i) != ' ')
		{
			while (*(str + i) != ' ' && *(str + i) != '\0')
			{
				i++;
			}
			count++;
		}
	}
	return (count);
}
/**
* strtow - splits a string into words.
* @str: string to split.
* Return:
* - NULL if str == NULL or str == "" or Failur.
* - Pointer to an array of strings (words).
*/
char **strtow(char *str)
{
char **a;
int count;

if (str == NULL || *str == '\0')
	return (NULL);
/* count words plus extra*/
count = count_words(str);
if (count == 0)
	return (NULL);
a = malloc(sizeof(char **) * count);
if (a == NULL)
return (NULL);

return (a);
}
