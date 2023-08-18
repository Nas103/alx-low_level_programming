#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)

{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
	}
}
