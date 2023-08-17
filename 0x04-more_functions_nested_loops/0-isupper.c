#include "main.h"

/**
 * _isupper - checks a character if it's uppercase
 * @c: The char to checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
