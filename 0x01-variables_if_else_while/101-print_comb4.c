#include <stdio.h>
/*
 * This program prints all possible combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
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
	int c;
	/* init a form 48 (dec of 0 in ascii) */
	a = 48;
	/* print numbers */
	while (a < 58)
	{
		/* init b with a + 1 to avoid repeatition */
		b = a + 1;
		while (b < 58)
		{
			/* init c with b + 1 to avoid repeatition */
			c = b + 1;
			while (c < 58)
			{
				/* print abc*/
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 55)
				{
					/* print comma followed by whitespace */
					putchar(44);
					putchar(32);
				}
				/* increment c */
				c++;
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
