#include "main.h"

/**
* print_to_98 - Print all natural numbers from x to 98
* @x: The number start printing
* Return: 0
 */

void print_to_98(int x)

{

	if  (x <= 98)
	{
	for (; x <= 98; x++)
	{
	if (x == 98)
	{
	printf("%d", x);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", x);
	}
	}
	}
	else
	{
	for (; x >= 98; x--)
	{
	if (x == 98)
	{
	printf("%d", x);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", x);
	}
	}
	}
}
