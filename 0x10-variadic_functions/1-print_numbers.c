#include "variadic_functions.h"
/**
 *print_numbers - print out all the number argument
 *@separator: separator argument
 *@n: number of argument to be passed
 *@...: last argument
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 1;
va_start(ptr, n);
while (i <= n)
{
printf("%d", va_arg(ptr, int));
if (i != n)
{
if (separator == NULL)
printf(" ");
else
printf("%s ", separator);
}
else
printf("\n");
i++;
}
va_end(ptr);
}
