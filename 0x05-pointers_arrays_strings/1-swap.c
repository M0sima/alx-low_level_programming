#include <stdio.h>

/**
* swap_int - swaps the values of two integers
* @a : integers to be swap
* @b : integers to be swap
* Return 0
*/

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
