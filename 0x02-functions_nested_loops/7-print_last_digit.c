#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @k: The number to be checked
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int k)
{
	int last_digit;

	last_digit = k % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit / -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
