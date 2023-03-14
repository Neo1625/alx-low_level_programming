#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars,
 * and intializes it with a specif char.
 * @size: Allocated size
 * @c: Specific char used to initialize.
 * Return: Returns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	str = malloc(sizeof(char) * size);

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
