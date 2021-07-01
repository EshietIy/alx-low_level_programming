#include "holberton.h"
/**
 *reverse_array - function to reverse an array
 *@a: array argumen
 *@n: n number of element
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int x;
int temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
x = 0;
while (x < n)
{
if (x != 0)
{
printf(", ");
}
printf("%d", a[x]);
x++;
}
putchar('\n');
}
