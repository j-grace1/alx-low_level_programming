#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int i, a, b, c, d;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			b = i * a;

			if (b > 9)
			{
				c = b % 10;
				d = (b - c) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(c + '0');
			}
			else
			{
				if (a != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(b + '0');
			}
		}

		_putchar('\n');
	}
}
