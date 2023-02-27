#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string,
 * followed by a new line, to stdout.
 * @str: string to print
 * Return: void
 */
void  puts_half(char *str)
{
	int i;

	i = _strlen(str) / 2;
	while (*(str + i) > 0)
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

