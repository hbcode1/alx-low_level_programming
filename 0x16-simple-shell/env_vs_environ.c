#include "main.h"
/**
 * main - prints the address of env and environ
 * 
 * Return: Always 0
 */

int main(int ac, char **av, char **env)
{
    printf("Address of env     :%p\n", env);
    printf("Address of environ :%p\n", __environ);
    return (0);
}