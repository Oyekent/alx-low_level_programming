#include "lists.h"

/*
 * Apply constructor attribute to myFunction() so that,
 * it is executed before main().
 */
void myFunction(void) __attribute__((constructor));

/**
 * myFunction - Prints a string before the main function is executed.
 */
void myFunction(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
