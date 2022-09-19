#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string
 * @str: parameter
 * Return: 0
 */

void _puts(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
