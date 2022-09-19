#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
