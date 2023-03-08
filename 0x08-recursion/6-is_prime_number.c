#include "main.h"

/**
 * is_prime - check if number is prime using recursion.
 * @n: number to check.
 * @next: n - 1 to check if it s a factor of n
 * Return:
 * 1 if prime.
 * 0 otherwise.
 */

int is_prime(int n, int next)
{
	/* case 1 is factor of all numbers */
	if (next == 1)
		return (1);
	if (n % next == 0)
		return (0);
	next--;
	return (is_prime(n, next));

}

/**
* is_prime_number - check if number is prime using recursion
* @n: number to check
* Return: 1 True, 0 False
*/
int is_prime_number(int n)
{
	/* 1 neither is a prime or composite */
	/* primes are posirive */
	if (n <= 1)
		return (1);
	/* The perfect prime */
	if (n == 2)
		return (1);
	/* call recursive function */
	return (is_prime(n, n - 1));
}
