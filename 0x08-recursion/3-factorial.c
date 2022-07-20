#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: The given number.
 *
 * Return: -1 if n is lower than 0 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
