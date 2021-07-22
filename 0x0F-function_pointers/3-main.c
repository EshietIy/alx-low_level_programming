#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - calculate parametr  base on argument
 *@argc: number argument passed
 *@argv: srting arguments
 *Return: and int
 * main function calculate two numbers base on the operator passed
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op = argv[2];
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (get_op_func(op) == NULL)
{
printf("Error\n");
exit(99);
}
if ((*(op) == '/' && num2 == 0) || (*(op)  == '%' && num2  == 0))
{
printf("Error\n");
exit(100);
}
result = get_op_func(op)(num1, num2);
printf("%d\n", result);
return (0);
}
