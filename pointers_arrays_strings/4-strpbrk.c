/**
 * _strpbrk - returns first occurence of one of the cahrs in a list
 * @s: pointer to a string to be checked
 * @accept: pointer to a list of characters to be checked against
 *
 * Return: pointer to first occurence 
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char zero = '\0';
	char *ptr = &zero;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == '\0')
		{
			return (ptr);
		}
		else
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] != accept[j])
				{
					if (accept[j + 1] == '\0')
						return (i);
					continue;
				}
				if (s[i] == accept[j])
				{
					return (&s[i]);
				}
			}
		}
	}
	return (i);
}
