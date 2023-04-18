#include "main.h"

/**
 * print_dirs - prints each directory contained in the the environment variable PATH,
 * one directory per line.
 * Return: 0 always
*/
int print_dirs(const char *path)
{
    int i = 0;
    while (*(path + i))
    {
        if (*(path + i) == ':')
            putchar('\n');
        else
            putchar(*(path + i));
        i++;
    }
    putchar('\n');
}
/**
 * main - Entry point
 * 
 * Return: 0 always
*/

int main(void)
{
    print_dirs(_getenv("PATH"));
    return (0);
}