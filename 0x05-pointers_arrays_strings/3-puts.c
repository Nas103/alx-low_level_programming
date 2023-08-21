#include "main.h"

/**
 * _puts - code that prints a string, then a new line
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
