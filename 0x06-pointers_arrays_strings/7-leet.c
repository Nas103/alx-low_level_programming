#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a, k;

	char s1[] = "aAeEoOtTiL";
	char s2[] = "443300771l";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[a] == s1[k])
			{
				n[a] = s2[k];
			}

		}
	}
	return (n);
}
