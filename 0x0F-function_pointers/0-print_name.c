#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - a function that accept char and function pointer
 *@name: char parameter
 *@f: function argument
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
