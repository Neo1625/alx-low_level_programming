#include "main.h"

/**
 * _strlen - Returns the lenthg of a string
 * @s: Chars input
 * Return: length of s
 */
int _strlen(char *s);

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
