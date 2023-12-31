#include "main.h"

/**
 * char*_strcpy - copies string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int z = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; z < l ; z++)
	{
		dest[z] = src[z];
	}
	dest[l] = '\0';
	return (dest);
}
