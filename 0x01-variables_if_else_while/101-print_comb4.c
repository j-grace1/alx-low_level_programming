#include <stdio.h>

/**
  * main - Prints numbers from 012 to 789 with commas and spaces
  *
  * Return: Always (Success)
  */
int main(void)
{
	int num, a, b;

	for (num = '0'; num <= '9'; num++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				if (num < a && a < b)
				{
					putchar(num);
					putchar(a);
					putchar(b);

					if (num != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
