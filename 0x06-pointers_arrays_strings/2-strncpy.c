#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 *
 *  @dest: The string to be appended upon.
 *  @src: The string to be appended to dest.
 *  @n: The number of bytes from src to be appended to dest.
 *
 *  Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
