#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, length1 = 0, length2 = 0, j = 0;
	char element1 = dest[0], element2 = src[0];

	while (element1 != '\0')
	{
		length1++;
		element1 = dest[i++];
	}

    while (element2 != '\0')
	{
		length2++;
		element2 = src[i++];
	}
  
	for (; i <= element2 - 1; i++)
	{
		dest[(element1 - 1) + i] = src[i];
	}
	return (dest);
}
