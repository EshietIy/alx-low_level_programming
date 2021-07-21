#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator
 * Return: function pointer corresponding to operator givenas a param
 */

int (*get_op_func(char *s))(int, int)
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
while (ops[i].op != NULL && *s != *(ops[i].op))
i++;
return ((ops + i)->f);
}

