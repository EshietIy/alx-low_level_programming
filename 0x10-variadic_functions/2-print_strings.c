#include "variadic_functions.h"
/**
 *print_strings - print out all the strings argument
 *@separator: separator argument
 *@n: number of argument to be passed
 *@...: last argument
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 1;
char *str;
va_start(ptr, n);
while (i <= n)
{
str = va_arg(ptr, char*);
printf("%s", (str == NULL ? "(nil)" : str));
if (separator != NULL && i != n)
printf("%s", separator);
i++;
}
va_end(ptr);
printf("\n");
}
