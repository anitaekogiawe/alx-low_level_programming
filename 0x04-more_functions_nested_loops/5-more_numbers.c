#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: 0
 */
void more_numbers(void)
{
	int b, c;

	for (b = 0; b <= 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c <= 9)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
		}
		_putchar('\n');
}
