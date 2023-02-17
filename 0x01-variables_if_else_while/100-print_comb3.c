#include <stdio.h>
/*
 * This program prints all possible combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
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
			/* print ab */
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
