#include "main.h"

/**
 * leet - encipher some specific letter
 * in input string
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, j;
	int plain[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int cipher[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == plain[j])
			{
				n[i] = cipher[j / 2];
				j = 9;
			}
		}
	}

	return (n);
}
