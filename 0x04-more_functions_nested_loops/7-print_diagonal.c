#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times '\' should be printed
 * Return: void
 */

void print_diagonal(int n)

{
	int b, a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (b = 0; b < n; b++)
	{
	for (a = 0; a < b; a++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
