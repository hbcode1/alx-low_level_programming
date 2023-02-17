#include <stdio.h>
/* This program prints the alphabet in lowercase, and then in uppercase, followed by a new line. */

/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* declare n */
	int n;
	/* init n form 65 (dec of A in ascii) */
	n = 65;
	/* print alphabet */
	while (n < 123)
	{
		if (n > 90 && n < 97)
		{
			n++;
		}
		else
		{
			putchar(n);
			/* increment n */
			n++;
		}
	}
	/* print new line */
	putchar(10);
	return (0);
}
