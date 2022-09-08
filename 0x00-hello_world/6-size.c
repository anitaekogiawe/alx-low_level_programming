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

	fprintf("Size of a char: %zu byte(s)\n", sizeof(a));
	fprintf("Size of a int: %zu byte(s)\n", sizeof(b));
	fprintf("Size of a long int: %zu byte(s)\n", sizeof(c));
	fprintf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	fprintf("Size of float: %zu byte(s)\n", sizeof(e));
	return (0);
}
