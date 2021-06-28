#include "holberton.h"
/**
 *print_array - a function that print n number of arry
 *@a: list of arry
 *@n: specified number of array
 *
 *
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d\n", a[i]);
}
}
