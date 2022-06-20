#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, val, check;

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				val++;
				check = 1;
			}
		}

		if (check == 0)
			return (val);
	}

	return (val);
    