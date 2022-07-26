#include "main.h"

/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: The size of the array.
 * @c: The character to fill the array with.
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
