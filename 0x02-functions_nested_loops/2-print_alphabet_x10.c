#include "main.h"

/**
 * Entry - print_alphabet_x10
 * Return - None
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void);
{
	char c;

	int i = 0;

	while (i < 10)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		putchar('\n');
		i++;
	}
