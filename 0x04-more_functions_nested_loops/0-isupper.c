#include "main.h"

/**
 * main - checks for uppercase character
 * @c: function to checked
 * Return: 1 on Success or 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
