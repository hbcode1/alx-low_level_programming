#include "main.h"
/**
 * main - print the proccess id of the current proccess parent
 * 
 * Return: 0 Success
 */

int main(void)
{
    __pid_t curr_ppid;
    
    curr_ppid = getppid();
    printf("%d\n", curr_ppid);
    return (0);
}