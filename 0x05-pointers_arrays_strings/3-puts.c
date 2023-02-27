#include "main.h"

/**
 * _puts - Functions that prints a string
 * @str: Input String
 */
void _puts(char *str);

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
		i++;
	}
	_putchar('\n');
}
