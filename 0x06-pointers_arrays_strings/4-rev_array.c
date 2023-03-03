#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Array input
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int c = 0;

	int mid = n / 2;

	int i = 0;

	while (i < mid)
	{
		c = a[i];
		a[i] = a[n - i];
		a[n - i] = c;
		i++;
	}
}
