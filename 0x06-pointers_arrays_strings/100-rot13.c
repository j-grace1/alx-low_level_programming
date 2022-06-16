#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode using rot13
 * @s: variable
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int i = 0, i2 = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char mod_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (i2 = 0; i2 <= 52; i2++)
		{
			if (*(s + i) == alphabet[i2])
			{
				*(s + i) = mod_alphabet[i2];
				break;
			}
		}
				i++;
	}
		return (s);
}
