#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @b: An integer
 *
 * Return: Always 0
 */
int _abs(int b)
{
	if (b < 0)
	{
		return (b * -1);
	}
	return (b);
}
