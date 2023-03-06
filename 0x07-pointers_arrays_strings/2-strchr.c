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
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

