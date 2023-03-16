#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Integer input.
 *
 * Return: Returns the pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
