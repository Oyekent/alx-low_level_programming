#include "main.h"

/**
 * srchprime - A function that searches for a prime number.
 *
 * @n: The input integer.
 * @i: The iterator.
 *
 * Return: 1 if input integer is a prime number or 0 otherwise.
 */

int srchprime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (srchprime(n, i + 1));
}
/**
 * is_prime_number - A function that checks for a prime number.
 *
 * @n: Input integer.
 *
 * Return: 1 if input integer is a prime number or 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (srchprime(n, 1));
}
