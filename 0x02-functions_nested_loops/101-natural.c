#include "main.h"
#include <stdio.h>

/**
* main - Lists all the natural numbers below 10 that are multiples of 3 or 5
* with 1024 excluded followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
