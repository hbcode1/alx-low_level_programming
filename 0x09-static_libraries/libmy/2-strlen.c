#include "main.h"
/**
 * _strlen - gets length of a string
 * @s: string to check
 * Return: the length of the string s
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	/* 0 = '\0' null in ascii */
	while (*(s + count) > 0)
	{
	/* printf("%d\n", *(s + count)) */
		count++;
	}
	return (count);
}

