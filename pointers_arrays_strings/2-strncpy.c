/**
 * _strncpy - copy (max n char) from src to dest
 * @dest : pointer to destination
 * @src : pointer to word to be copied
 * @n: max number of char of second word
 *
 * Return: pointer to concatenated string (=pointer orignal dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	do
	{	if (src[i] != '\0') 
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	while (i < n);

/**				
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
*/
	return (dest);
}
