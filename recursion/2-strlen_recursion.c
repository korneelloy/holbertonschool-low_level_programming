#include <stdio.h>
/**
 * _strlen_recursion - counting length of string
 * @s: pointer to a string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
