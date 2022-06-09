#include "main.h"

/**
  * _isupper - Checks if a letter is uppercase
  * @x: The number of the letter to be checked
  *
  * Return: 1 for upper letter else 0
  */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}

	return (0);
}
