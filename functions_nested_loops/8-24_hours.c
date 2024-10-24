#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int un, deux, trois, quatre;

	for (un = 48; un < 51; un++)
	{
		for (deux = 48; deux < 58; deux++)
		{
			if (un == 50 && deux >= 52)
			{
				continue;
			}
			for (trois = 48; trois < 54; trois++)
			{
				for (quatre = 48; quatre < 58; quatre++)
				{
					_putchar(un);
					_putchar(deux);
					_putchar(58);
					_putchar(trois);
					_putchar(quatre);
					_putchar('\n');
				}
			}
		}
	}
}
