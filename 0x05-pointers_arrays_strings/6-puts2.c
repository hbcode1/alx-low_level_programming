#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line, to stdout.
 * @str: string to print
 * Return: void
 */
void  puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) > 0)
	{
		if (i % 2)
			putchar(*(str + i));
			i++;
		else
			i++;
	}
	putchar(10);
}

