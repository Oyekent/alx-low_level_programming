#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: The string to be measured.
 *
 * Return: The length of string.
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * chkpal - A function that checks if string is a palindrome.
 *
 * @s: The string to be checked.
 * @x: The index of the string.
 * @y: The length of the string.
 *
 * Return: 1 if the string is a palindrome or 0 otherwise.
 */

int chkpal(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
			return (1);
		else
			return (chkpal(s, x + 1, y - 1));
	else
		return (0);
}
/**
 * is_palindrome - A function that checks if a string is a palindrome.
 *
 * @s: base address for string.
 *
 * Return: 1 if the string is a palindrome or 0 otherwise.
 */

int is_palindrome(char *s)
{
	return (chkpal(s, 0, _strlen_recursion(s) - 1));
}
