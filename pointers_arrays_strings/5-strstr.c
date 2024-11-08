/**
 * _strstr - returns first occurence of a substring another string
 * @haystack: pointer to a string to be checked
 * @needle: pointer to string to look for
 *
 * Return: pointer to first occurence, or pointer to null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, compteur = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			compteur++;
			if (needle[j] == '\0')
				return (&haystack[i] - compteur);
		}
		else
		{
			j = 0;
			continue;
		}
	}
	return (&haystack[i]);
}
