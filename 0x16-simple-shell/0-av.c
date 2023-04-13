#include "main.h"

/**
 * main - prints all the arguments, without using ac.
 * Return: 0 Success.
 */

int main(int __attribute__((unused))ac, char *av[])
{
    while (*av)
    printf("%s\n", *av++);
    return (0);
}