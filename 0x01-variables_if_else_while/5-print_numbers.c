#include <stdio.h>
/**
 * main - Entry point
 *
 * Executes all single digit numbers
 * of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
printf("%d\n", number);
}
return 0;
}
