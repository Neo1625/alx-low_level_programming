#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory for an
 * array of nmemb elements of size bytes
 * @nmemb: Array
 * @size: Size in bytes.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < (nmemb * size))
	{
		*((char *)arr + i) = 0;
		i++;
	}

	return (arr);
}
