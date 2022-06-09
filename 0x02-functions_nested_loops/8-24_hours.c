#include "main.h"

/**
  * jack_bauer - Prints every minute of the day
  *
  * Return: ...
  */
void jack_bauer(void)
{
	int i, x, y, z;

	for (i = 0; i <= 2; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if ((y <= 1 && y <= 9) || (i <= 2 && x <= 3))
			{
				for (y = 0; y <= 3; y++)
				{
					for (z = 0; z <= 9; z++)
					{
						_putchar(i + '0');
						_putchar(x + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
