#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * Return: 0
 */

void more_numbers(void)

{
	int i;
	int b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
	}
	_putchar('\n');
}
