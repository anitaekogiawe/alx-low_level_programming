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

	fprintf(stderr, "Size of a char: %zu byte(s)\n", sizeof(a));
	fprintf(stderr, "Size of a int: %zu byte(s)\n", sizeof(b));
	fprintf(stderr, "Size of a long int: %zu byte(s)\n", sizeof(c));
	fprintf(stderr, "Size of a long long int: %zu byte(s)\n", sizeof(d));
	fprintf(stderr, "Size of float: %zu byte(s)\n", sizeof(e));
	return (0);
}
