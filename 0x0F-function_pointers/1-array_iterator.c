#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - a functtion that accept a function and an array
 *@size: size_t argument
 *@array: array argument
 *@action: fuction argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
if (array != NULL && action != NULL)
{
while (i < size)
{
action(*(array + i));
i++;
}
}
}
