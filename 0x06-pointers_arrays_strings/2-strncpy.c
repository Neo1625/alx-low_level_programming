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

	while (dest_len < n && dest[dest_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	while (dest_len < n)
	{
		dest[dest_len] = '\0';
		dest_len++;
	}

	return (dest);
}
