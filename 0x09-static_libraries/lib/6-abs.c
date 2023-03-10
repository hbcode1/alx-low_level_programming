#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * Return: absolute int
 * @num: integer to be computed
 */
int _abs(int num)
{
	if (num < 1)
		return (num * -1);
	else
		return (num);
}
