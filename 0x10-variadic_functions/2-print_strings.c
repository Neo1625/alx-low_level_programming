#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the functions
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;
	char *str;

	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(a_list, char *);
		if (i != n - 1 && separator != NULL)
		{
			if (str != NULL)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("(nil)%s", separator);
			}
		}
		else
		{
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(a_list);
}
