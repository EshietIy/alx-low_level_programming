#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - main function and takes no argument
 *main contain code that checks if number is = 0, < 6, or >5
 *Return: 0
 */
int main(void)
{
int n;
long lstdgt;
srand(time(0));
n = rand() - RAND_MAX / 2;
lstdgt = n % 10;
if (lstdgt == 0)
printf("Last digit of %d is %ld and is 0\n", n, lstdgt);
else if (lstdgt < 6)
printf("Last digit of %d is %ld and is less than 6 and not 0\n", n, lstdgt);
else
printf("Last digit of %d is %ld and is greater than 5\n", n, lstdgt);
return (0);
}
