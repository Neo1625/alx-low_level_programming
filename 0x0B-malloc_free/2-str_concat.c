#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer of s1 concatenated with s2.
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, j  = 0;
	int i;
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
	s1ands2 = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (s1ands2 == NULL)
	{
		return (NULL);
	}
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
	s1ands2[s1_len + s2_len] = '\0';

	return (s1ands2);
}
