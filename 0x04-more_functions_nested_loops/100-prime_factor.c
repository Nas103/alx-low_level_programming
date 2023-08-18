#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: Finds and prints the largest prime factor of a number.
 * Return: Always 0 (Success)
 */

int main(void)

{
	unsigned long long number = 612852475143;
	unsigned long long longestPrime = 0;

	while (number % 2 == 0)
	{
		longestPrime = 2;
		number /= 2;
	}
	for (unsigned long long i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			longesttPrime = i;
			number /= i;
		}
	}
	if (number >  2)
	{
		longestPrime = i;
	}
	printf("%llu\n", longestPrime);
	return (0);
}
