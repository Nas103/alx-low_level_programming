#include "main.h"

/**
 * _memcpy - function that copies memory data
 * @dest: memory location
 * @src: memory data location
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int k = n;

	for (; a < k; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
