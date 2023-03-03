#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * to uppercase.
 * @s: String input.
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int s_len = 0;

	while (s[s_len] != '\0')
	{
		if (s[s_len] >= 65 && s[s_len] <= 90)
			continue;
		else
			s[s_len] = s[s_len] - 32;
		s_len++;
	}

	return (s);
}
