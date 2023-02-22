#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, s, i, j;

	i = 0;
	j = 1;
	while (j < 4000000)
	{
		s = i;
		i = j;
		j = i + s;
		if (!(j % 2))
			printf("%ld", j);
		if (j < 1000000)
			printf(", ");
	}
	printf("\n");
	return (0);
}
