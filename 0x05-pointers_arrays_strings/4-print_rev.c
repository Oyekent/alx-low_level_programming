#include "main.h"

/**
 * print_rev - A function that prints a string in reverse, with a new line.
 *
 * @s: String to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

