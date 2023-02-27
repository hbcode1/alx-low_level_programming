#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - rints a string, in reverse,
 * followed by a new line, to stdout.
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
		int max, i;

		max = _strlen(s) - 1;
		i = max;
		while (i >= 0)
		{
			putchar(*(s + i));
			i--;
		}
		putchar(10);
}
