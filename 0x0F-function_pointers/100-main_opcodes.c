#include <stdio.h>
#include <stdlib.h>
/**
* main - print opcodes of its own main function
* @argc: number of arguments
* @argv: vector of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int (*p)(int, char **) = &main;
	int b, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
		printf("%02x%c",
		       *((unsigned char *)(p + i)), i < b - 1 ? ' ' : '\n');
	return (0);

}

