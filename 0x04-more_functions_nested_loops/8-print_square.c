#include "main.h"

/**
 * print_square -prints a square usingthe '#' character
 * @size: size of the square
 * Return: void
 */

void print_square(int size)

{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; j <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
