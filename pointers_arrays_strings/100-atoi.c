#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: pointer to string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int i;
       	int compteur_neg = 0; 
	int reponse = 0; 
	int j = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			reponse += s[i]*j;
			printf("evoluition: %d\n", reponse);
			j = j * 10;
			if (s[i+1] > 47 && s[i+1] < 58)
				continue;
			else
				break;
		}
	}
	
	for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == '-')
                {
                        compteur_neg++;
                }
        }

        if (compteur_neg % 2 == 1)
                reponse = 0 - reponse;

	return (reponse);
}
