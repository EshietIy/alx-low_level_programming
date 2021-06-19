#include <stdio.h>
/**
 *main - primary function serves as starting point of the program
 *Return: 0 upon the reaching the end of the program
 */
int main(void)
{
char ch;
int x;
long y;
long long int z;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(ch));
printf("Size of an int: %ld byte(s)\n", sizeof(x));
printf("Size of a long int: %ld byte(s)\n", sizeof(y));
printf("Size of a long long int: %ld byte(s)\n", sizeof(z));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
