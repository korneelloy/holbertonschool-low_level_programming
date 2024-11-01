/**
 * cap_string - capitalize words of a string
 * @string : pointer to first char of string
 *
 * Return: pointer to same string in capitalized
 */

char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[0] > 96 && string[0] < 123)
		{
			string[0] = string[0] - 32;
		}
		else if (string[i] == 32 ||
			string[i] == 9 ||
			string[i] == 10 ||
			string[i] == 44 ||
			string[i] == 59 ||
			string[i] == 46 ||
			string[i] == 33 ||
			string[i] == 63 ||
			string[i] == 34 ||
			string[i] == 40 ||
			string[i] == 41 ||
			string[i] == 123 ||
			string[i] == 125)
		{
			if (string[i + 1] > 96 && string[i] < 123)
			{
				string[i + 1] = string[i + 1] - 32;
			}
		}
	}
	return (string);
}
