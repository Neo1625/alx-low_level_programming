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
	unsigned int i, j, s1_len = 0, s2_len = 0, remlen;
	char *s1ands2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	if (n >= s2_len)
	{
		s1ands2 = malloc(sizeof(char) * (s1_len + s2_len + 1));
		remlen = s2_len;
	}
	else
	{
		s1ands2 = malloc(sizeof(char) * (s1_len + n + 1));
		remlen = n;
	}
	if (s1ands2 == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		s1ands2[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i]; i++)
	{
		s1ands2[j] = s2[i];
		j++;
	}
	s1ands2[s1_len + remlen] = '\0';

	return (s1ands2);
}
