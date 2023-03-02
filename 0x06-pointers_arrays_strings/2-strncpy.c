#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: String input.
 * @src: String input.
 * @n: Integer input.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;

	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src_len < n && src[src_len] != '\0')
	{
		src[src_len] = dest[dest_len];
		src_len++;
		dest_len++;
	}

	return (dest);
}
