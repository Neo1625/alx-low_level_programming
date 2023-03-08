#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: String input.
 *
 * Return: Returna the length of a string
 */
int _strlen_recursion(char *s)
{
	int s_len = 0;

	if (s[0] == '\0')
	{
		return (0);
	}

	s_len = 1 + _strlen_recursion(s + 1);

	return (s_len);
}
