#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: arrays
 * @n: the number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int s;

	for (i = 0; i < n--; i++)
	{
	s = a[i];
	a[i] = a[n];
	a[n] = s;
	}
}
