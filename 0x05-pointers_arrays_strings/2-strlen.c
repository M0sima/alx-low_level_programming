#include <stdio.h>

/**
* _strlen -return the length of string
* @str: string to get the length
* Return: length
*/

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
