#include <stdio.h>
/* more headers goes there */

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
	/* print alphabet*/
	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			n++;
		}
		else
		{
			putchar(n);
			/* increment n*/
			n++;
		}
	}
	/* print new line*/
	putchar(10);
	return (0);
}
