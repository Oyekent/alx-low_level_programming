#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet in lowercase foll
* wed by a new line.
*
* Return 0
*/

void print_alphabet_x10(void)
{
	int x;
	int j;

	for (x = 0; x < 10; x++)
	{

		for (j = 'a'; j <= 'z'; j++)

		_putchar(j);

	  _putchar('\n');
	}
}
