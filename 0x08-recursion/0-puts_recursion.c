#include "main.h"

/**
 * _put_recursion - function puts();
 * @s: input
 * Return: 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
