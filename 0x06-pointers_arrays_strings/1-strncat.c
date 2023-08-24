#include "main.h"

/**
 * _strcat - that concatenates two strings
 * @dest: 1st intput value
 * @src: 2nd input value
 * @n: 3rd input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for(index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
