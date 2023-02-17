#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if statement */
	if (n > 0)
	{
		printf("%d is greater than 0", n);
	}
	else if (n < 0)
	{
		printf("%d is less than 0", n);
	}
	else
	{
		printf("%d is zero", n);
	return (0);
}
