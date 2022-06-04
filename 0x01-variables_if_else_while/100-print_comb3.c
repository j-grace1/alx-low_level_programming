#include <stdio.h>

/**
  * main - Prints numbers from 01 to 89 with commas and spaces
  *
  * Return: Always (Success)
  */
int main(void)
{
	int num, a;

	for (num = '0'; num <= '9'; num++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (num < a)
			{
				putchar(num);
				putchar(a);

				if (num != '8' || (num == '8' && a != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
