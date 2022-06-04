#include <stdio.h>

/**
 * main - Prints the decimal numbers from 0 to 9 with space and commas
 *
 * Return: Always successful
 */

int main(void)
{
	int num;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
    
	putchar('\n');

	return (0);
}
