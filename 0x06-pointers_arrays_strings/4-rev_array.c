#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Array input
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int temp;

	int i = 0;

	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
