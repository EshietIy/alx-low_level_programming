#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers from min to max
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array or null
 * If min > max or If malloc fails
 */


int *array_range(int min, int max)
{
int *p;
int count, x, i;
count = 0;
x = min;
if (min > max)
return (NULL);
while (x <= max)
{
count++;
x++;
}
p = (int *)malloc(count *sizeof(int));
if (p == NULL)
return (NULL);
for (i = 0; i < count; i++)
*(p + i) = min++;
return (p);
}
