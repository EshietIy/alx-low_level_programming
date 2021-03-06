#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array argument
 * @size: number of elements argument
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the first integer or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || cmp == NULL || array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(*(array + i)))
return (i);
}
return (-1);
}
