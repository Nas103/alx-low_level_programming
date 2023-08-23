#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer
 * Return: *s
 */

char *rot13(char *s)
{
	int a, k;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[a] == data1[k])
			{
				s[a] = datarot[k];
				break;
			}
		}
	}
	return (s);
}
