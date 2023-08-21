#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of 2 integers
 * @a: 1st parameter/int
 * @b: 2nd parameter/int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
