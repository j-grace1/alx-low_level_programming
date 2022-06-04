#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if a number is greater than 5,less than 6 and not 0 or equals to 0
 *
 * Return: Always successfull
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}

	return (0);
}
