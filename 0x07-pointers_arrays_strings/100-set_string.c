#include "main.h"

/**
  * set_string - A function that sets the value of a pointer to a char.
  *
  * @s: The pointer character.
  * @to: The value to assign.
  *
  * Return: Nothing.
  */
void set_string(char **s, char *to)
{
	*s = to;
}
