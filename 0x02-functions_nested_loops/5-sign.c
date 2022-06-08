#include "main.h"

/**
  * print_sign - it Prints the sign of a number
  * @n: The number that is to be checked
  *
  * Return: 1 for positive, -1 for negative else 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
