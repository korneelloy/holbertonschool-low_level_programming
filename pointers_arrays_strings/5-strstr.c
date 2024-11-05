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
	int i = 0, j = 0, index = 0;

	while (needle[i] != '\0')
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] != haystack[j])
			{
				continue;
			}
			else
			{
				if (index == 0)
				{
					index = j;
				}
				i++;
			}
		}
		return (haystack + index);
	}
	return (0);
}
