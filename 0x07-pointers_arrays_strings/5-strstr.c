#include "main.h"

/**
* _strstr - locates a substring.
* finds the first occurrence of
* @needle: the substring
* @haystack: string.
* The terminating null bytes (\0) are not compared
* Return:
* - pointer to the beginning of the located substring
* - NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *nee;
	char *hay;

	while (*haystack != '\0')
	{
		nee = needle;
		hay = haystack;
		while (*haystack == *nee && *nee != '\0')
		{
			haystack++;
			nee++;
		}
		if (*nee == '\0')
			return (hay);
		haystack++;
	}
	return ('\0');
}
