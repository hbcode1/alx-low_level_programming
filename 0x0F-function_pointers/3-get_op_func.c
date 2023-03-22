#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* get_op_func - selects the correct function to perform
*			the operation asked by the user.
*
* @s: The operation selected by th user.
*
* Return:
*	- pointer to the function that will be executed.
*	- NULL: if operator is unvalid.
*/

int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;
while (*ops[i].op != *s && ops[i].op != NULL)
i++;
if (!ops[i].op)
return (NULL);
return (ops[i].f);
}
