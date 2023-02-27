#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - rints a string, in reverse, 
 * followed by a new line, to stdout.
 * @str: string to print
 * Return: void
 */
void print_rev(char *s)
{
		int max, i;

		max = _strlen(s);
		i = max;
		while (i > 0)
		{
			putchar(* (str + i));
			i--;
		}
		putchar(10);
}
