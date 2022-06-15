#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: length of the inputed string
 */
int _strlen(char *s)
{
	int i = 1, length = 0;
	char element = s[0];

	while (element != '\0')
	{
		length++;
		element = s[i++];
	}
	return (length);
}
