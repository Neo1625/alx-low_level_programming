#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

void _printf(va_list f);
void _printi(va_list i);
void _printc(va_list c);
void _prints(va_list s);
void print_all(const char * const format, ...);

/**
 * _printf - Function that prints float
 * @f: Float to print.
 *
 * Return: void.
 */
void _printf(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * _printi - Function that prints integer
 * @i: Integer to print.
 *
 * Return: void.
 */
void _printi(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * _printc - Function thagt prints a char.
 * @c: Character to print
 *
 * Return: void.
 */
void _printc(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * _prints - Functions that prints a string.
 * @s: String input.
 *
 * Return: void.
 */
void _prints(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Function that prints anything.
 * @format: List of types of arguments passed to the function
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	dt_t types[] = {
		{"c", _printc},
		{"i", _printi},
		{"f", _printf},
		{"s", _prints},
		{NULL, NULL}
	};

	int i, j = 0;
	va_list a_list;
	char *separator = "";

	va_start(a_list, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (types[i].type != NULL)
		{
			if (*(types[i].type) == format[j])
			{
				printf("%s", separator);
				(types[i].func)(a_list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(a_list);
}
