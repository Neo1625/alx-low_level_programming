#include "main.h"

/**
 * _memcpy - Copies n characters from memory area src to memory area dest.
 *
 * @dest: Destination array where the content is to be copied.
 * @src: Source of the data to be copied.
 * @n: This is the number of bytes to be copied.
 *
 * Return: This function returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
