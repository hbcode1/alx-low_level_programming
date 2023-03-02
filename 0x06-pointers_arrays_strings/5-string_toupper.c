#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase letters 
 * of a string to uppercase.
 * @str: string to convert.
 * Return: string uppercase. 
 */

char *string_toupper(char *str)
{
	int i = 0,j = 0;
	char lowers[] = "abcdefghijklmnopqrstuvwxyz";
	char uppers[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (str[j] != '\0')
	{
		if (str[j] >= 97 && str[j] <= 122)
		{
			while ( str[j] != lowers[i])
			{
				i++;
			}
			str[j] = uppers[i];
			i = 0;
		}
		j++;
	}
	/* for(i = 65; i <= 90; i++)
	 *{printf("%c",i);}
      */
     /* for(i = 97; i <= 122; i++){printf("%c",i);}
      */
	return str;
}
