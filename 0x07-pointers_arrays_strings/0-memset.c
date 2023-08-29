#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address
 * @b: desired value
 * @n: number of bytes changed
 * Return: changed array with new value for bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
