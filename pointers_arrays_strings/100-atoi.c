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
	int last;
	int compteur_dig = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			if (s[i+1] > 47 && s[i+1] < 58)
			{
				compteur_dig = compteur_dig * 10;
				continue;
			}
			else
			{
				last = i;
				break;
			}
		}
	}

	printf("xxlast = %d\n", i);
	printf("dig: %d\n", compteur_dig);

	for (i = last; s[i] > 47 && s[i] < 58; i--)
	{
		reponse += (s[i]-48)*compteur_dig;
		compteur_dig = compteur_dig / 10;
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
