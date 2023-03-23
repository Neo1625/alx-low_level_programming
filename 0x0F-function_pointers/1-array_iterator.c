#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as
 * a parameter on each element of an array.
 * @array: Array input.
 * @size: Size of the array input.
 * @action: Function pointer.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
