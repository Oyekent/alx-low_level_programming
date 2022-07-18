#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: The initial segment 's'.
 * @accept: the prefix being measured.
 *
 * Return: The number of bytes in he initial segment of 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int u = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				u++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (u);
		}

		s++;
	}

	return (u);
}
