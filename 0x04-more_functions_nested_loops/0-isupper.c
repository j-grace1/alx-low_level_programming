#include "main.h"

/**
  * _isupper - Checks if a letter is uppercase
  * @x: The number of the letter to be checked
  *
  * Return: 1 for upper letter else 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
