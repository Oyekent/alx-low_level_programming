#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
