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

	b = 0;
	while(b <= 10)
	{
		c = 0;
		while(c <= 14)
		{
			if (c <= 9)
			{
				_putchar('0' + c);
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
