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
	long int s, i, j, sum;

	i = 0;
	j = 1;
	sum = 0;
	while (j < 4000000)
	{
		s = i;
		i = j;
		j = i + s;
		if (!(j % 2))
			sum = sum + j;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
