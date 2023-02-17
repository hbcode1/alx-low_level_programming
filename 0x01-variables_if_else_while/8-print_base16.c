#include <stdio.h>
/*
 * This program prints all the numbers of base 16 in lowercase,
 * followed by a new line.
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
	/* init n form 97 (dec of a in ascii) */
	n = 97;
	/* print letters form a to f */
	while (n < 103)
	{
		putchar(n);
		/* increment n */
		n++;
	}
	/* print new line */
	putchar(10);
	return (0);
}
