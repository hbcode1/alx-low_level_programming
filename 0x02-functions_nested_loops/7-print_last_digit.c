#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: number to check
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int x;

	x = _abs(num % 10);
	_putchar(x);
	return (x);
}
