#include <stdio.h>

/**
 * _strlen - code that returns the length of a string
 * @str: String to get the length of
 * Return: lenght of the @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
