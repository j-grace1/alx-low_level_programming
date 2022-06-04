#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always successful
 */

int main(void)
{
	char ch;
    int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
