#include "main.h"

/**
 * _islower - prints 1 if c is lowercase else 0
 * @c: is the input into the function
 * 
 * Return: returns 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
