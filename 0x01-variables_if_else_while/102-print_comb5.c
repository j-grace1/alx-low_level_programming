#include <stdio.h>

/**
  * main - Prints from 00 to 99 in a special way
  *
  * Return: Always (Success)
  */
int main(void)
{
	int num, a, b, c;

	for (num = 48; num <= 57; num++)
	{
		for (a = 48; a <= 57; a++)
		{
			for (b = 48; b <= 57; b++)
			{
				for (c = 48; c <= 57; c++)
				{
					if (((b + c) > (num + a) &&  b >= num) || num < b)
					{
						putchar(num);
						putchar(a);
						putchar(' ');
						putchar(b);
						putchar(c);

					if (num + a + b + c == 227 && num == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
