#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to power of y
 *
 * @x: The value to be raised.
 * @y: The power.
 *
 * Return: Result and -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
