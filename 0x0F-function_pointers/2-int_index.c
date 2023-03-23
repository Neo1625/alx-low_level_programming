#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Array input.
 * @size: Size of array input.
 * @cmp: Function pointer.
 *
 * Return: Returns index of the first element for which
 * the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL || size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
