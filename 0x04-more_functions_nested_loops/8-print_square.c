#include "main.h"

/**
 * print_square -prints a square usingthe '#' character
 * @size: size of the square
 * Return: void
 */

void print_square(int size)

{
	int b, m;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (b = 0; b < size; b++)
	{
	for (m = 0; b < size; m++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
