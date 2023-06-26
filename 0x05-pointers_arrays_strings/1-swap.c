#include "main.h"

/**
* swap_int - swaps the values of two integers
* @m : swap integers
* @n : swap integers
*/

void swap_int(int *m, int *n)

{
	int p;

	p = *m;
	*m = *n;
	*n = m;
}
