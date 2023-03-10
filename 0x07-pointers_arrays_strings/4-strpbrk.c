#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String input
 * @accept: String containing the characters to match
 *
 * Return: Pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j])
			return (s + i);
	}

	return ('\0');
}
