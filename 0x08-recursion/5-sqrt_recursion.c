#include "main.h"

/**
 * sqroot - A function for _sqrt_recursion.
 *
 * @n: The input number.
 * @i: The iterator.
 *
 * Return: Square root.
 */

int sqroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqroot(n, i + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 *
 * @n:The input number.
 *
 * Return: Square root of number or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqroot(n, 1));
}
