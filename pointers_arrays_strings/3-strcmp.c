/**
 * _strcmp - comparing 2 strings
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 *
 * Return: 0 if strings equal / -0 if str1<str2 / +0 if str1>str2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			break;
	}

	if (diff == 0)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (j > i)
				diff = s2[j];
		}
	}
	return (diff);
}
