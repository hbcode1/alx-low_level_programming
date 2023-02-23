#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143,
 * followed by a new line.
 * isprime - check if number is prime
 * @x: to check if prime
 * Return: 0 success
 */

int isprime(int x);

int main(void)
{
	unsigned long int i, number = 612852475143;
	int temprime = 2;

	for (i = 2; i <= number / 10000000; i++)
	{
		if (isprime(i) && number % i == 0)
		{
			temprime = i;
			while (number % i == 0)
			{
				number = number / temprime;
			}
		}
	}
	printf("%lu", number);
	return (0);
}

int isprime(int x)
{
	int mult, i;

	mult = 0;
	for (i = 2; i < x; i++)
	{
		if (!(x % i))
		{
			mult = mult + 1;
		}
	}
	if (mult > 0)
		return (0);
	else
		return (1);

}

