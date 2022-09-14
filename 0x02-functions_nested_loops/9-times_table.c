#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			c = (a * b);
			if ((a <= 9) && (b == 9)
			{
				if ((c <= 9) && ((c % 10) >= 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			else
			{
				if ((c <= 9) && ((c % 10) >= 0))
				{
					_putchar(' ');
					_putchar((c %  10) + '0');
					_putchar(',');
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					_putchar(',');
				}
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
