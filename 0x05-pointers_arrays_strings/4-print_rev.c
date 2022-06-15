#include "main.h"

/**
 * print_rev - prints a string, in reverse order
 * @s: string input
 * Return: string in reverse order
 */
void print_rev(char *s)
{
	int temp = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		temp++;
	}

	for (j = (temp - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
