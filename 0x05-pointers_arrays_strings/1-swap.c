#include "main.h"

/**
 * swap_int - Swaps values of int
 * @a: Input to the first pointer to an int
 * @b: Input to the second pointer to an int
 */

void swap_int(int *a, int *b);

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
