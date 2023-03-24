#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: Number of arguments
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = n; i >= 0; i = va_arg(ap, int))
	{
		sum += i;
	}
	va_end(ap);
	return (sum);
}
