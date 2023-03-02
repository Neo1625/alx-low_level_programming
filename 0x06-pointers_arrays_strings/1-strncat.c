include "main.h"

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

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	if (src_len >= n)
	{
		for (i = 0; i < n; i++)
		{
			dest[dest_len] = src[i];
			dest_len++;
		}
	}
	else
	{
		for (i = 0; i < src_len; i++)
		{
			dest[dest_len] = src[i];
		}

		dest[dest_len] = '\0';
	}

	return (dest);
}
