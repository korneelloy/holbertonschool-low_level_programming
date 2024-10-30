/**
 * _strcpy - copies string
 * @dest: pointer to 1st char of destination
 * @src: pointer to the 1st char of string to be copied
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
