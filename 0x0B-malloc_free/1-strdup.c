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
	int str_size;

	int i;

	char *new_str;

	for (i = 0; str[i]; i++)
	{
		str_size++;
	}

	new_str = malloc(sizeof(char) * str_size);

	if (str_size == 0)
	{
		return (NULL);
	}
	else if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			new_str[i] = str[i];
		}
	}
	return (new_str);
}
