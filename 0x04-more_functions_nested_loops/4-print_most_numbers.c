#include "holberton.h"
#include <ctype.h>
/**
 *print_most_numbers - function that prints 0 - 9
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i >= '9'; i++)
{
_putchar(i);
_putchar('\n');
}

}
