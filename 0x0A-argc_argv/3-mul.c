#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *main - entry point of the programme
 *@argc: argument count of main
 *@argv: argument vector of main
 *Return: int
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int x, y;
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d", x *y);
}
else
printf("Error");
printf("\n");
return (0);
}
