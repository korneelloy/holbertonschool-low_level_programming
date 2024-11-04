/**
 * _memset - fills n cases of memory with b, starting at s
 * @s: pointer to the start character
 * @b: the caracter that need to be filled in
 * @n: number of cases toi be filled in
 *
 * Return: same pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
