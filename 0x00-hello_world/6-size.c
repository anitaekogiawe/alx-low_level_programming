#include <stdio.h>

/**
 * main - Print the sizeof var types
 *
 * Return: Alwasys 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	fprintf("Size of a char: %zu byte(s)\n", sizeof(a), stderr);
	fprintf("Size of a int: %zu byte(s)\n", sizeof(b), stderr);
	fprintf("Size of a long int: %zu byte(s)\n", sizeof(c), stderr);
	fprintf("Size of a long long int: %zu byte(s)\n", sizeof(d), stderr);
	fprintf("Size of float: %zu byte(s)\n", sizeof(e), stderr);
	return (0);
}
