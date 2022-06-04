#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always successful
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
    for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
