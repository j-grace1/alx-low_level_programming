#include "main.h"

/**
  * _isdigit - Checks if character is a digit
  * @i: The number to be checked
  *
  * Return: 1 for a digit else 0
  */
int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}

	return (0);
}
