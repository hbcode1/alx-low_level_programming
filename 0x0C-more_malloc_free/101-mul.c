#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - check if string can be converted to a number.
* @n: string.
* Return:
* 1 number
* 0 not number
*/

int is_number(char *n)
{
while (*n != '\0')
{
if (isdigit(*n) == 0)
return (0);
n++;
}
return (1);
}

/**
* main - multiplies two positive numbers.
*
* @ac: number of args.
* @av: array of args.
*
* Return: 0 Success.
*/

int main(int ac, char *av[])
{
int n1, n2;
if (ac != 3)
{
printf("Error\n");
exit(98);
}
else
{
if (is_number(av[1]) && is_number(av[2]))
{
n1 = atoi(av[1]), n2 = atoi(av[2]);
n1 = n1;
n2 = n2;
_putchar(10);
return (0);
}
else
{
printf("Error\n");
exit(98);
}
}
}
