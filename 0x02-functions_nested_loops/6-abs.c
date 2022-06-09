#include "main.h"

/**
  * _abs - compustes the absolute value of a funtion
  * @h: The number that is to be checked
  *
  * Return: 1 for positive, -1 for negative else 0
  */
int _abs(int h)
{
	if (h < 0)
	{
		int absolute_value;

		absolute_value = h / -1;

		return (absolute_value);
	}

	return (h);
}
