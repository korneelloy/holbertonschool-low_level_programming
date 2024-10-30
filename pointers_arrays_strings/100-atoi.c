int pos_or_neg(char *s);
int get_first(char *s);
int get_last(char *s);

/**
 * _atoi - convert string to integer
 * @s: pointer to string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = pos_or_neg(s);
	int first = get_first(s);
	int last = get_last(s);
	int times = last - first;
	double dig = 1;
	int i = -1;
	int j;
	double reponse = 0;

	for (j = 0; j < times; j++)
		dig = dig * 10;
	for (i = first; i <= last; i++)
	{
		reponse += (s[i] - 48) * dig;
		dig = dig / 10;
	}
	if (sign == -1)
		reponse = 0 - reponse;
	if (i == -1)
		reponse = 0;
	return (reponse);
}


/**
 * pos_or_neg - is the string positif or negatif
 * @s: pointer to a string
 *
 * Return: -1 if negatif +1 if positif
 */

int pos_or_neg(char *s)
{
	int i = 0;
	int compteur_neg = 0;
	int compteur_pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			compteur_neg++;
		else if (s[i] == '+')
			compteur_pos++;
		else if (s[i] > 47 && s[i] < 58)
			break;
	}
	if (compteur_neg > compteur_pos)
		return (-1);
	else
		return (1);
}

/**
 * get_first - get first number in the string
 * @s: pointer to a string
 *
 * Return: position / index of first number
 */

int get_first(char *s)
{
	int i = 0;
	int first = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			first = i;
			break;
		}
	}
	return (first);
}

/**
 * get_last - get last number in the string
 * @s: pointer to a string
 *
 * Return: position / index of last number
 */

int get_last(char *s)
{
	int i = 0;
	int last = -2;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			if (s[i + 1] > 47 && s[i + 1] < 58)
			{
				continue;
			}
			else
			{
				last = i;
				break;
			}
		}
	}
	return (last);
}
