#include "main.h"

/**
  * _isupper - Checks if a letter is uppercase
  * @x: The number of the letter to be checked
  *
  * Return: 1 for upper letter else 0
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
