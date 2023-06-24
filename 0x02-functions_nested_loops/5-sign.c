#include "main.h"

/**
* print_sign - print the sign
* @x: the number to be checked
* Return: positive and negative number or zero for anything else
*/

int print_sign(int x)

{

	if (x > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (x < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
