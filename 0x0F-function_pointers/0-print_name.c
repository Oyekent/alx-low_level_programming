#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 *
 * @name: The name printed.
 * @f: The function.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
