#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse
* @x: the string
* Return : void
*/

void print_rev(char *x)

{
	int c = 0;

	while (x[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
	_putchar(x[c]);
	}
	_putchar('\n');
}
