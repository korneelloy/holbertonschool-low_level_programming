/**
 * _strlen - returns lengt of a string
 * @s: pointer to a character / 1st char of a string
 *
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int compteur = 0;

	while (*s != '\0')
	{
		compteur++;
		s++;
	}
	return (compteur);
}
