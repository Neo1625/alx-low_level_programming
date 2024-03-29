#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: String input.
 * @s2: String input.
 * @n: First n bytes of s2.
 *
 * Return: Returns a pointer to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, m;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	if (j > n)
	{
		j = n;
	}
	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < i; m++)
	{
		str[m] = s1[m];
	}

	for (m = 0; m < j; m++)
	{
		str[m + i] = s2[m];
	}

	str[i + j] = '\0';
	return (str);
}
