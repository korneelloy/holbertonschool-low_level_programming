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

	while (haystack[i] != '\0')
	{
		if (needle[j] == '\0')
			return (0);
		else
		{
			index = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] != needle[j])
				{
					i++;
					break;
				}
				else
				{
					i++;
					continue;
				}
			}
			return (haystack + index);
		}
	}
	return (haystack + index);
}
