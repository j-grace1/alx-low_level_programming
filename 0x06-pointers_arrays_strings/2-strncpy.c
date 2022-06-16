#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:receipient of additional sting
 * @src: string to be added
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
