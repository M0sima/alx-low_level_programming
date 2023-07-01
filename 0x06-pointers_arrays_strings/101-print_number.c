#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int c1;

	c1 = n;
	if (n < 0)
	{
	_putchar('-');
	c1 = -n;
	}
	if (c1 / 10 != 0)
	{
	print_number(c1 / 10);
	}
	_putchar((c1 % 10) + '0');
}
