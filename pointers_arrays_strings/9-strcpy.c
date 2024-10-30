/**
 * _strcpy - copies string
 * @dest: pointer to 1st char of destination
 * @src: pointer to the 1st char of string to be copied
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i, str_len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		str_len++;
	}
	if (str_len != 0)
		dest[str_len + 1] = '\0';
	else
		dest[0] = '\0';
	return (dest);
}
