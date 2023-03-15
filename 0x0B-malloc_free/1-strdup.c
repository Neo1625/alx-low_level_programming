#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a
 *  newly allocated space in memory.
 *  @str: String input.
 *
 *  Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	int str_size = 0;

	int i;

	char *new_str;

	for (i = 0; str[i]; i++)
	{
		str_size++;
	}

	new_str = malloc(sizeof(char) * (str_size + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			new_str[i] = str[i];
		}
		new_str[i++] = '\0';
	}
	return (new_str);
}
