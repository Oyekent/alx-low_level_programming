#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer in an array of integers.
 *
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: -1 if no element matches. If size <= 0 return -1.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
