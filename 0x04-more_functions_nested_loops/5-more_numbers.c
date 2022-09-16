#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
	char a, c;
	int d, e;

	d = 0;
	e = 1;

	while (d < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			c = a;
			if (a > 9)
			{
				_putchar('0' + e);
				c = a % 10;
			}
			_putchar('0' + c);
		}
		d++;
	}
}
