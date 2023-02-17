#include <stdio.h>
/*
 * This program prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 */

/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* declare n */
	int n;
	/* init n form 122 (dec of z in ascii) */
	n = 122;
	/* print alphabet */
	while (n > 96)
	{
		putchar(n);
		/* decrement n */
		n--;
	}
	/* print new line */
	putchar(10);
	return (0);
}
