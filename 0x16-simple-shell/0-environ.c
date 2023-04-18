#include "main.h"

/**
 * main - prints the environment using the global variable environ
 * Return: Always 0.
 */
int main(void)
{
    
    unsigned int i;
    i = 0;
    while (__environ[i] != NULL)
    {
        printf("%s\n", __environ[i]);
        i++;
    }
    return (0);
}
