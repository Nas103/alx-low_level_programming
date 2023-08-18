#include "main.h"

/**
 * print_number - prints out an integer using putchar
 * @n: Integer to be printed
 */

void print_number(int n)

{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
