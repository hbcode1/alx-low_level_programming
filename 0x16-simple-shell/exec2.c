#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(int c, char* v[], char **env)
{
    char *newv[] = {v[1], v[2], NULL};
    printf("Before execve\n");
    if (execve(newv[0], newv, env) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
