#include <stdio.h>

/**
* main - A C program that prints the size of various types on the computer it is compiled and run on.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of an char: %i byte(s)\n", sizeof(c));
printf("Size of an int: %i byte(s)\n", sizeof(i));
printf("Size of a long int: %li byte(s)\n", sizeof(li));
printf("Size of a long long int: %lli byte(s)\n", sizeof(lli));
printf("Size of a float: %f byte(s)\n", sizeof(f));
return (0);
}
