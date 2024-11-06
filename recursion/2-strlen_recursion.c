#include <stdio.h>
/**
 * _strlen_recursion - counting length of string
 * @s: pointer to a string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	char *ptr = 0;
	if (*s == '\0')
	{
		ptr = s;
		printf("a la fin de la boucle: %p\n", s);
	}

	_strlen_recursion(s + 1);
        printf("ici: %p\n", ptr);
	return (0);
}
