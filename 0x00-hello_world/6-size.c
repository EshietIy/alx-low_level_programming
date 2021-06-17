#include <stdio.h>
/**
 *main - primary function serves as starting point of the program
 *Return: 0 upon the reaching the end of the program
 */
int main(void)
{
char chnum;
int intnum;
long lngnum;
/*long long lngg;*/
float flt;
pritf("Size of char : %lu.\n", (unsigned long)(sizeof(chnum));
pritf("Size of int : %lu.\n", (unsigned long)(sizeof(intnum));
pritf("Size of long : %lu.\n", (unsigned long)(sizeof(lngnum));
/*pritf("Size of long long : %lu.\n", (unsigned long)(sizeof(lngg));*/
pritf("Size of float : %lu.\n", (unsigned long)(sizeof(flt));
return (0);
}
