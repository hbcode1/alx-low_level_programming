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
 * main - adds positive numbers
 * @argc: argument count: number of arguments passed to the program.
 * @argv: argument vector: one-dimensional array of arguments
 * that was passed to the program.
 * Return: 0 Success, 1 Error.
 */

int main(int argc, char **argv)
{
	int i, money, coins;
	int change [] = {25, 10, 5, 2, 1};

	if (argc != 2 || !is_number(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		money = atoi(argv[1]);
		coins = 0;
		for (i = 0; i < 5; i++)
		{
			if (money / change[i] != 0)
			{
				coins += money / change[i];
				money = money - (money / change[i]) * change[i];
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
