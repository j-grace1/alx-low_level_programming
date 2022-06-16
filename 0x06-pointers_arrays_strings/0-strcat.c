#include <stdio.h>
#include "main.h"

/**
 * char *_strcat - contcatinates strings pointed
 * by inputs
 * @dest: receipient of additional sting
 * @src: string to be added
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
