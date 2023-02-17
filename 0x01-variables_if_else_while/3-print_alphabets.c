#include <stdio.h>
/*
 * This program prints the alphabet in lowercase,
 * and then in uppercase,
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
	/* init n form 97 (dec of a in ascii) */
	n = 97;
	/* print alphabet */
	while (n < 123)
	{
		putchar(n);
		/* increment n */
		n++;
	}
	n = 65;
	while (n < 91)
	{
		putchar(n);
		/* increment n */
		n++;
	}
	/* print new line */
	putchar(10);
	return (0);
}
