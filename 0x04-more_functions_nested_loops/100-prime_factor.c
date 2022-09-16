#include "main.h"
#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long int n, b;

	n = 612852475143;
	for (b = 2; b <= n; b++)
	{
		if (n % b == 0)
		{
			n /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
