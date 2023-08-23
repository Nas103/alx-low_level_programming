#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, l;

	for (j = 0; j < n--; j++)
	{
		l = a[j];
		a[j] = a[n];
		a[n] = l;
	}
}
