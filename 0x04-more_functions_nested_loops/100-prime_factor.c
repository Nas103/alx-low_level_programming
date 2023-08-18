#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: Finds and prints the largest prime factor of a number.
 * Return: Always 0 (Success)
 */

int main(void)

{
	long b, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (b = 1; b <= square; b++)
	{
	if (number % b == 0)
	{
	maxf = number / b;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
