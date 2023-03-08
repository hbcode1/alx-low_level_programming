#include "main.h"

/**
 * _sqrt_root - returns the natural square root of a positive number.
 * @n: positive number.
 * @p: n - 1.
 * Return:
 * square natural if n has one
 * -1 if n does not have a natural square root
 */

int _sqrt_root(int n, int p)
{
	if (p * p == n)
	{
		return (p);
	}
	/* square has to be in 0 side */
	if (p * p < n)
	{
		return (-1);
	}
	return (_sqrt_root(n, p - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return:
 * square natural if n has one
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	/* eleminate 0 */
	if (n == 0)
		return (0);
	/* eleminate 1 */
	if (n == 1)
		return (1);
	/* eleminate negative numbers */
	if (n < 0)
		return (-1);
	/* call recursive function */
	return (_sqrt_root(n, n - 1));
}
