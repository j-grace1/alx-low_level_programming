#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long i, prime_max;
	long num = 612852475143;
	double sqr_t = sqrt(num);

	for (i = 1; i <= sqr_t; i++)
	{
		if (num % i == 0)
		{
			prime_max = num / i;
		}
	}

	printf("%ld\n", prime_max);

	return (0);
}
