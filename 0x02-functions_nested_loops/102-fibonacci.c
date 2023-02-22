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
	int a, s, i, j;

	i = 1;
	j = 2;
	for (a = 1 ; a <= 50; a++)
	{
		s = i;
		i = j;
		j = i + s;
		printf("%d, ", j);
	}
	printf("\n");
	return (0);
}
