#include "main.h"

/**
* getlength - find string length.
* @a: string
* Return: string length.
*/
int getlength(char *a)
{
	int i, len;

	while (*(a + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

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
	int i = 0, temp_len = 0, reset;
	int len = getlength(needle);
	/* reset i */
	i = 0;
	/* itirate string*/
	while (*haystack != '\0')
	{
		/* while no first match eleminate */
		while (*haystack != *(needle + i))
		{
			haystack++;
		}
		/* from the first match calculate matches */
		while (*haystack == *(needle + i) && *(needle + i) != '\0')
		{
			haystack++, temp_len++, i++;
		}
		/* when matches done compare to substirng length */
		if (temp_len == len)
		{
			/* reset from the fisrt match */
			for (reset = 0; reset < temp_len; reset++)
			{
				haystack--;
			}
			break;
		}
		else
		{
			/* reset from the character after the first match */
			for (reset = 0; reset < temp_len - 1; reset++)
			{
				haystack--;
			}
			/* reset substring and match len */
			temp_len = 0, i = 0;
		}
	}
	return (haystack);
}
