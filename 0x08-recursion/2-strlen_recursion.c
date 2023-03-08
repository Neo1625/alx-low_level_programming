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
	char *new_s = s + 1;

	s_len = 1 + strlen_recursion(new_s);

	return (s_len);
}
