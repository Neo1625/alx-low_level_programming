#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array of an element
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n);

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
