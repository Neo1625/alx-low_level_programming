#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: Number of arguments.
 * @argv: Vector of arguments.
 *
 * Return: 0. if the two multiplicants are OR 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int result;

	int first;
	int second;

	if (argc <= 1)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		first = atoi(argv[1]);

		second = atoi(argv[2]);

		result = first * second;

		printf("%d\n", result);

		return (0);
	}
}
