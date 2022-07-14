#include "main.h"

/**
  * string_toupper - A function that changes all lowercase letters to uppercase
  *
  * @p: The string returned.
  *
  * Return: Value of char.
  */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
