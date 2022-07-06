#include "main.h"

/**
* print_alphabet_10x - Prints 10 times the alphabet in lowercase followed by
* a new line.
*
* Return 0
*/

void print_alphabet_10x(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{

		for (y = 'a'; y <= 'z'; y++)

		_putchar(y);

	  _putchar('\n');
	}
}
