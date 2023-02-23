#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line.
 * for multiples of three print Fizz
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both 3 and 5 print FizzBuzz.
 * Return: 0 success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (!(n % 3) && n % 5)
			printf("Fizz");
		else if (!(n % 5) && n % 3)
			printf("Buzz");
		else if (!(n % 5 && n % 3))
			printf("FizzBuzz");
		else
			{
				printf("%d", n);
			}
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
