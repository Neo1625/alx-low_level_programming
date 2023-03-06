#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: This is the C string to be scanned.
 * @c: This is the character to be searched in s.
 *
 * Return: Returns a pointer to the first occurrence
 * of the character c in string s.
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
	}

	return (NULL);
}

