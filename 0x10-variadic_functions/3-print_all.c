#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char c;
	int i;
	float f;
	char *s;

	const char *p = format;

	va_start(arg, format);

	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				c = va_arg(arg, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(arg, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(arg, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		++p;
		if (*p != '\0')
		{
			if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
				printf(", ");
		}
	}
	printf("\n");
	va_end(arg);
}
