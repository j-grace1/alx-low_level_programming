#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:receipient of additional sting
 * @src: string to be added
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}
	return (dest);
}
