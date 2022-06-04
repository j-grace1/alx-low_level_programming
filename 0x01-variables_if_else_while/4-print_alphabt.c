#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always successful
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
