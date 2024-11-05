/**
 * _strchr - locate char in string
 * @s: pointer to a string
 * @c: character to be found
 *
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
