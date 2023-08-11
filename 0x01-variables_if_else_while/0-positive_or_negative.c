#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * This code generates a random number and prints whether
 * it is positive, negative, or zero.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
printf("positive");
else if (n == 0)
printf("zero");
else
printf("negative");
printf("\n");
return (0);
}
