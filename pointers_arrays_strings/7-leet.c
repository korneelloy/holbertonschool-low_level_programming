/**
 * leet - encoding
 * @string : a pointer to a string
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *string)
{
	int i, j;
	char list[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char rempl[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == list[j])
			{
				string[i] = rempl[j / 2];
			}
		}
	}
	return (string);
}
