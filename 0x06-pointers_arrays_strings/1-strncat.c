#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: String input.
 * @src: String input.
 * @n: Integer input.
 *
 * Return: Dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	int i = 0;

	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src_len < n && src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
