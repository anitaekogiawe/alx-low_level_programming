#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: letters
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
