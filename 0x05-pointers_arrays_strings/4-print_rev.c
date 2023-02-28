#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: string
 */
void print_rev(char *s);

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		*s++;
		i++;
	}
	_putchar('\n');

	while (i != -1)
	{
		_putchar(*s);
		*s--;
		i--;
	}
	_putchar('\n');
}
