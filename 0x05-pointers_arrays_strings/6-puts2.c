#include "main.h"

/**
 * _puts - prints sting in specila way
 * @str: string input
 * Return: string
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
