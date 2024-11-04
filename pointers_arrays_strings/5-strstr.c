#include <stdio.h>
/**
 * _strstr - returns first occurence of a substring another string
 * @haystack: pointer to a string to be checked
 * @needle: pointer to string to look for
 *
 * Return: pointer to first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char **ptr = &haystack;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == '\0')
		{
			return (0);
		}
		else
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
				{
					*ptr = *ptr + i;
					for (k = 0; needle[j + k] != '\0'; k++)

				}
			}
		}
	}
	return (0);
}
