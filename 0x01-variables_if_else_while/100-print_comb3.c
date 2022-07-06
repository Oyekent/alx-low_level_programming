#include <stdio.h>

/**
* main - Prints all possible different combinations of two digits, seperated
* by comma followed by space and in ascending order.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');
if (digit1 == 8 && digit2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}