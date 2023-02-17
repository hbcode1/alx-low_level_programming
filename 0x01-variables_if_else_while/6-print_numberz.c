#include <stdio.h>
/*
 * This program prints all single digit numbers of base 10
 * starting from 0,
 * followed by a new line.
 * using only putchar function
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
	/* init n form 48 (dec of 0 in ascii) */
	n = 48;
	/* print numbers */
	while (n < 58)
	{
		putchar(n);
		/* increment n */
		n++;
	}
	/* print new line */
	putchar(10);
	return (0);
}
