#include <stdio.h>
/*
 * This program prints all possible combinations of two two-digit numbers.
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
	int a, b, i, j;
	/* init a and b from 48 (dec of 0 in ascii) */
	a = b = 48;
	/* print numbers */
	while (a < 58)
	{
	while (b < 58)
	{
	i = j = 48 ;
	while (i < 58)
	{
	while (j < 58)
	{
		if (i > a || (i == a && j > b))
		{
			putchar(a);
			putchar(b);
			putchar(32);
			putchar(i);
			putchar(j);
			if (!(a == 57 && b == 56))
				putchar(44);
				putchar(32);
		}
		j++; /* increment j */
	}
	j = 48; /* reset j */
	i++; /* increment i*/
	}
	b++; /* increment b */
	}
	b = 48; /* reset b */
	a++; /* increment a */
	}
	putchar(10); /* print new line */
	return (0);
}
