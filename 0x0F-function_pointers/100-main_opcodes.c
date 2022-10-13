#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
