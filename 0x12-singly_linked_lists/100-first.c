#include "lists.h"

/**
 * Apply constructor attribute to myFunction() to execute before main()
 */
void __attribute__((constructor)) myFunction(void);

/**
 * myFunction - Prints a string before the main function is executed.
 */
void myFunction(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
