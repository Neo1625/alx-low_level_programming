#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */

void puts2(char *str);

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\n'; i++)
	{
		if ((i % 2) == 0)
		{
			_putschar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
