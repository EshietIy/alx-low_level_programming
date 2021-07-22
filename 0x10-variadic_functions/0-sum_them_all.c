#include "variadic_functions.h"

/**
 *sum_them_all - adds all the sum of all parameter
 *@n: number of parameter
 *@...: represent tha last parameter
 *Return: int sum of all argument
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list ptr;
va_start(ptr, n);
while (i < n)
{
sum += va_arg(ptr, int);
i++;
}
va_end(ptr);
return (sum);
}
