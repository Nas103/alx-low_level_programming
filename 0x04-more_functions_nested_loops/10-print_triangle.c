#include "main.h"

/**
 * print_triangle - Prints a triangle made of '#' characters.
 * @size: The size of the triangle.
 */

void print_triangle(int size)

{
	int b, m, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (b = 0; b < size; b++)
	{
	for (m = size - b; m > 1; m--)
	{
		_putchar(32);
	}
	for (w = 0; w <= b; w++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
	}
}
