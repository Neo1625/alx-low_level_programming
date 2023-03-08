#include "main.h"

/**
 * _puts_recursion - Function thats prints a string
 * @s: String input.
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
		return (0);
	_putchar(s[0]);
	_puts_recursion(s + 1);
}

