#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: String input.
 * @s2: String input.
 *
 * Return: an integer value representing the result of the comparison.
 * 0 if the two strings are equal in length and total ASCII value,
 * 1 if s1 is shorter than s2, and 1 if s1 is longer than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
