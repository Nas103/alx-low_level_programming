#include "main.h"

/**
 * _strcat - code that concatenates two strings
 * @dest: 1st intput value
 * @src: 2nd input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a, k;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[a] = src[k];
		a++;
		k++;
	}
	dest[a] = '\0';
	return (dest);
}
