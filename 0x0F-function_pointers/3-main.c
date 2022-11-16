#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument count, number of arguments
 * @argv: argument vector, array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int a, b, r;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		print("Error\n");
		exit(99);
	}

	o= *argv[2];

	if ((o == '/' || o == '&') && b == 0)
	{
		printf("Error\n");
		exit (100);
	}

	r = func(a, b);

	printf("%d\n", r);

	return (0);
}
