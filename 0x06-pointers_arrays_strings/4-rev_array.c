#include "holberton.h"
/**
 * reverse_array - Compares two strings
 * @a: Pointer to array of integers
 * @n: Number of elements of a
 * Return: void
*/
void  reverse_array(int *a, int n)
{
int i;
int *start;
int *endpt;
int temp;
start = a;
endpt = (a + n - 1);
for (i = 1; i < n / 2; i++)
{
temp = *start;
*start = *endpt;
*endpt = temp;
start++;
endpt--;
}
}
