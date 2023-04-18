#include "main.h"
/**
 * getenv_value - return value of env variable
 * 
 * Return: variable value or NULL
*/

char *getenv_value(char *var, int start)
{
    if (var)
    {
        while (start + 1)
        {
            var++;
            start--;
        }
        return (var);
    }
    return (NULL);
}

/**
 * _getenv - return an environment variable
 * Return:
 *  - value of variable string
 *  - NULL: if not exist.
 */

char *_getenv(const char *name)
{
    unsigned int i = 0, j = 0;
    while (__environ[i])
    {
        while (j < strlen(name))
        {
            if (*(name + j) == *(__environ[i] + j))
                j++;
            else
            {
                j = 0;
                i++;
            }
        }
        if (j == strlen(name))
            return (getenv_value(__environ[i], j));
        j = 0;
        i++;
    }
    return (NULL);
}
/*

int main(void)
{
    char *path, *shell;
    path = _getenv("PATH");
    if (path)
        printf("%s\n", path);
    shell = _getenv("SHELL");
    if (shell)
        printf("%s\n", shell);
    return (0);
}
*/