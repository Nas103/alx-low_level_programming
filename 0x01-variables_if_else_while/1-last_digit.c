#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This code generates a random number and prints
 * the last digit along with a description.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = abs(n) % 10;
printf("Last digit of %d is ", n);
if (lastDigit > 5)
    {
printf("%d and is greater than 5\n", lastDigit);
    } else if (lastDigit == 0)
    {
printf("%d and is 0\n", lastDigit);
    } else
    {
printf("%d and is less than 6 and not 0\n", lastDigit);
    }
return (0);
}