#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
* main - This program performs simple mathematical operations.
*
* @ac: number of arguments passed to the program.
* @av: array of arguments passed to the program.
*
* Return: 0 Success.
*/

int main(int ac, char *av[])
{
int num1, num2;
char *op;
char o;

if (ac != 4 || av[2][1] != '\0')
{
printf("Error 0\n");
exit(98);
}

num1 = atoi(av[1]);
op = av[2];
o = *av[2];
num2 = atoi(av[3]);

if (!(o == '+' || o == '-' || o == '*' || o == '/' || o == '%'))
{
printf("Error 1\n");
exit(99);
}
if ((*op == '/' || *op == '%') && num2 == 0)
{
printf("Error 2\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
