#include "main.h"

/**
  * _isalpha - checks for any letter of the alphabet
  * @c: The letter that is to be checked
  *
  * Return: 1 if found or else 0
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
