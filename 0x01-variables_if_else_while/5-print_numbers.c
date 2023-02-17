#include <stdio.h>
/*
 * This program prints all single digit numbers of base 10
 * starting from 0,
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
	/* init n form 0 */
	n = 0;
	/* print numbers */
	while (n < 10)
	{
		printf("%d", n);
		/* increment n */
		n++;
	}
	/* print new line */
	printf("\n");
	return (0);
}
