#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string.
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char arr[_strlen(str) + 1];
	int i, j, len;

	len = _strlen(str) + 1;
	j = len - 2;
	for (i = 0; i < len; i++)
	{
		arr[i] = *(str + j);
		j--;
	}
	j = len - 2;
	for (i = 0; i < len; i++)
	{
		*(str + j) = arr[j];
		j--;
	}
}
