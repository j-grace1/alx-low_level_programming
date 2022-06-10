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

	for (x = 1; x <= sqr_t; x++)
	{
		if (num % i == 0)
		{
			prime_max = num / i;
		}
	}

	printf("%ld\n", prime_max);

	return (0);
}
