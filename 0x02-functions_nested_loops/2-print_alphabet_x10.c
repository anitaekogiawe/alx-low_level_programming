#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, a new line
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar("%d", i);
		}
	}
	_putchar('\n');
}
