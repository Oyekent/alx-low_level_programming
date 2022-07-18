#include "main.h"

/**
  * _strstr - A function that locates a substring.
  *
  * @haystack: The string to be searched.
  * @needle: The string to be located.
  *
  * Return: A pointer to the beginning of the located string, or "NULL"
  * if substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
