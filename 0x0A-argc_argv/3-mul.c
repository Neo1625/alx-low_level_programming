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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);

		return (0);
	}
}

