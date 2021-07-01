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
int *endPt;
int temp;
startPt = a;
endPt = (a + n - 1);
for (i = 1; i < n / 2; i++)
{
temp = *start;
*start = *endpt;
*endpt = temp;
start++;
endPt--;
}
}
