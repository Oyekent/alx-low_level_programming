#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 *
 * @c: The character to be located.
 * @s: The string where the character is located.
 *
 * Return: A pointer to the first occurence of the character 'c'
 * in the string 's' or "NULL" if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}