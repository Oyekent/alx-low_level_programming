 #include "main.h"

/**
 * _realloc - A function that reallocates a memory block using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: A pointer to the reallocated new size memory, or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m
	unsigned int i, n = new_size;
	char *oldm = ptr;

	if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	m = malloc(new_size);

	if (m == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		m[i] = oldm[i];

	free(ptr);
	return (m);
}
