#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether a number is positive, zero or negative
 *
 * Return: Always successfull
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (n > 0)
	{
		printf("%d is positive\n", digit);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", digit);
	}
	else
	{
		printf("%d is negative\n", digit);
	}

	return (0);
}
