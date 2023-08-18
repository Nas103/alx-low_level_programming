#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times '\' should be printed
 * Return: void
 */

void print_diagonal(int n)

{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, k;

		for (i = 0 ; k <= i ; k++)
		{
			for (k = 0 ; k <= i ; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
