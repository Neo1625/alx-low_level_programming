#include "main.h"

/**
 * factorial - Functionn that returns the factorial of a given number.
 * @n: Integer input.
 *
 * Return: Factorial output.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
