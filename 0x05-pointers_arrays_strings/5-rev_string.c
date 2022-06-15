#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input to be reversed
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int temp = 0;
	int i;

	while (s[temp] != '\0')
		temp++;

	for (i = 0; i < temp; i++)
	{
		temp--;
		reverse = s[i];
		s[i] = s[temp];
		s[temp] = reverse;
	}
}
