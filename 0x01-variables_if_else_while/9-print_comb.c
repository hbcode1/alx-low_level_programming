#include <stdio.h>
/*
 * This program prints all possible combinations of single-digit numbers.
 * starting from 0,
 * followed by a new line.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
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
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		/* increment n */
		n++;
	}
	/* print new line */
	putchar(10);
	return (0);
}
