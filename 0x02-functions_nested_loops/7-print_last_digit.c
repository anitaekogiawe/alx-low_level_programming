#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of  any number given
 *
 * @n: numbers
 *
 * Return: Always 0
*/
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
