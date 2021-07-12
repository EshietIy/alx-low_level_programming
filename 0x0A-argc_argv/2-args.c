#include <stdio.h>
/**
 *main - entry point of the programme
 *@argc: argument count of main
 *@argv: argument vector of main
 *Return: int
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
printf("\n");
}
return (0);
}
