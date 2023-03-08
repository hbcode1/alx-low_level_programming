#include <stdio.h>

/**
* is_prime_number - check if number is prime using recursion
* @n: number to check
* Return: 1 True, 0 False
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (1 - is_prime_number(n - 1));
}
