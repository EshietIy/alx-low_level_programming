#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - fuction that get two arguments and swap them
 *
 *@a: first argument
 *@b: second argument
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
