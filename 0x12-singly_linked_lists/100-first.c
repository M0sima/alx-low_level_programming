#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("They won! and yet, not play,\n");
	printf("I am not feeling well!\n");
}

