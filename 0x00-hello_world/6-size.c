#include <stdio.h>
#include <conio.h>

/**
 * main - Print the sizeof var types
 *
 * Return: Alwasys 0 (success)
 */
int main(void)
{
	char typechar;
	int typeint;
	long int typelongint;
	long long int longlongint;
	float typefloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(typechar));
	printf("Size of a int: %zu byte(s)\n", sizeof(typeint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(typelongint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
	printf("Size of float: %zu byte(s)\n", sizeof(typefloat));
	return (0);
}
