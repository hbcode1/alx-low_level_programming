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
	/* init a, b, i and j from 48 (dec of 0 in ascii) */
	a = b = i = j = 48;
	/* print numbers */
	while (a < 58)
	{
	while (b < 58)
	{
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
			if (a <= 58 && b <= 57)
			{
				putchar(44);
				putchar(10);
			}
		}
		j++; /* increment j */
	}
	j = 48; /* reset j */
	i++; /* increment i*/
	b++; /* increment b */
	}
	a++; /* increment a */
	}
	putchar(10);/* print new line */
	return (0);
}
