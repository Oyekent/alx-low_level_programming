#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: The string to get the length.
 *
 * Return: Length of @s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
