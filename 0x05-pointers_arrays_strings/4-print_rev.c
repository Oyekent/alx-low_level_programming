#include "main.h"

/**
 * print_rev - A function that prints a string in reverse, with a new line.
 *
 * @s: String to be printed.
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != 0)
	{
		index++;
	}
	while (index > 0)
	{
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}
