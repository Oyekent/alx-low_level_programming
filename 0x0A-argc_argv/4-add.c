#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 *
 * @argc: The number of command line arguments or the size of @argv array.
 * @argv: The array containing the program command line arguments
 * or the array of size @argc.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc < 1)
		printf("0\n");

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");

				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
