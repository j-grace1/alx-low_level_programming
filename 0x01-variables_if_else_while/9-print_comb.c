#include <stdio.h>

/**
 * main - Prints the decimal numbers from 0 to 9 with space and commas
 *
 * Return: Always successful
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}

	putchar('\n');

	return (0);
}
