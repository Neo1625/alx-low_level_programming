#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 * @argc: Count of arguments.
 * @argv: Vector of arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
