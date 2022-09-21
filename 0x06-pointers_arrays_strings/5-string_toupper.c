#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to upper.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.vvvvv
 */

char *string_toupper(char *str)v
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
