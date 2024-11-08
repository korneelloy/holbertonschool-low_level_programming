/**
 * _strstr - returns first occurence of a substring another string
 * @haystack: pointer to a string to be checked
 * @needle: pointer to string to look for
 *
 * Return: pointer to first occurence, or pointer to null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	
	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i] - j + 1);
		}
		else
		{
			j = 0;
			continue;
		}
	}
	return (0);
}
