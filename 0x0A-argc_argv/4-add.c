#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry
 * @argc: Number of arguments
 * @argv: Vector arguments.
 *
 * Return: 0 if numbers were added OR if one
 * of the number contains number that are not digits.
 */

int main(int argc, char *argv[])
{
	int result = 0;

	int i, j;

	if (argc < 3)
	{
		printf("%d\n", 0);

		return (1);
	}
	else
	{
		for (i = 1; i <  argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);

	return (0);
}
