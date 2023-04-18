#include "main.h"

/**
* main - stat example
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
    unsigned int i;
    struct stat st;
    int f;
    if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
    i = 1;
    while (av[i])
    {
        printf("%s:", av[i]);
        f = open(av[i], O_RDONLY);
        if (f == -1)
        {
            printf(" NOT FOUND\n");
        }
        else
        {
            printf(" FOUND\n");
            close(f);
        }
        i++;
    }
    return (0);
}