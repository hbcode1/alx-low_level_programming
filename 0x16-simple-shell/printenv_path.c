#include "main.h"

/**
 * main - print element of env
 * Return : 0
*/

int main(int ac, char **av, char **env)
{
    unsigned int i;
    char *path;
    int index = -1;

    while (env[i] != NULL)
    {
        if (*env[i] == 'P')
            if (*(env[i] + 1) == 'A')
                if (*(env[i] + 2) == 'T')
                    if (*(env[i] + 3) == 'H')
                        if (*(env[i] + 4) == '=')
                            index = i;
    i++;
    }
    i = 5;
    if (index != -1)
    {
        while (*(env[index] + i))
        {
            putchar(*(env[index] + i));
            i++;
        }
    }
    return (0);
}