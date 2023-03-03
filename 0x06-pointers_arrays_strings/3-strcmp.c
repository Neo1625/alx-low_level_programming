#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: String input.
 * @s2: String input
 *
 * Return: 1 if s1 is greater than s1, 0 if s1 is equals to s1 and -1
 * s1 is less than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0;

	int s1_value = 0;

	int len_s2 = 0;

	int s2_value = 0;

	int result = 0;

	while (s1[len_s1] != '\0')
	{
		s1_value += s1[len_s1];
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		s2_value += s2[len_s2];
		len_s2++;
	}

	if (len_s1 == len_s2 && s1_value == s2_value)
	{
		result = 0;
	}
	else if (len_s1 < len_s2)
	{
		result = -1;
	}
	else
	{
		result = 1;
	}

	return (result);
}
