/**
 * _strspn - returns length of a string until encounter of unlisted char
 * @s: pointer to a string to be checked
 * @accept: pointer to a list of characters to be checked against
 *
 * Return: nimber of char / bytes untill unknown char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

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
				if (s[i] != accept[j])
				{
					if (accept[j + 1] == '\0')
						return (i);
					continue;
				}
				if (s[i] == accept[j])
				{
					break;
				}
			}
		}
	}
	return (i);
}
