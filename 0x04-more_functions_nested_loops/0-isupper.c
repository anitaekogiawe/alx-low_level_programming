#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: letters
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c == 'A' || c <= 'Z')
	{
		c = 1;
		_putchar(c);
	}
	else
	{
		c = 0;
		_putchar(c);
	}
	return (0);
}
