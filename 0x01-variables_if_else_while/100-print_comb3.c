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
	/* declaration */
	int a;
	int b;
	/* init a form 48 (dec of 0 in ascii) */
	a = 48;
	/* print numbers */
	while (a < 58)
	{
		/* init b with a + 1 to avoid repeatition */
		b = a + 1;
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				/* print comma followed by whitespace */
				putchar(44);
				putchar(32);
			}
			/* increment b */
			b++;
		}
		/* increment a */
		a++;
	}
	/* print new line */
	putchar(10);
	return (0);
}
