#include <stdio.h>
/**
 * _strpbrk - returns first occurence of one of the chars in a list
 * @s: pointer to a string to be checked
 * @accept: pointer to a list of characters to be checked against
 *
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char **ptr = &s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == '\0')
		{
			return (0);
		}
		else
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					return (*ptr + i);
				}
			}
		}
	}
	return (0);
}
