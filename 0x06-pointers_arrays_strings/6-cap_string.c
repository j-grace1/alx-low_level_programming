#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input string
 * Return: capitalized first letter of a every word
 */
char *cap_string(char *n)
{
	int i, x;
	int capit = 32;
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - capit;
		}

		capit = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				x = 12;
				capit = 32;
			}
		}
	}
	return (n);
}
