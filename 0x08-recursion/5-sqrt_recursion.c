#include "main.h"

int _sqrt_helper(int sqrt, int n);

/**
 * _sqrt_recursion - Returns the natural square root.
 * @n: Integer input.
 *
 * Return: Natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(0, n));
}

/**
 * _sqrt_helper - helps check square root based on number input.
 * @n: Integer input.
 * @sqrt: the possible roor.
 *
 * Return: Returns root or -1.
 */
int _sqrt_helper(int sqrt, int n)
{
	if (sqrt * sqrt > n)
	{
		return (-1);
	}
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}

	return (_sqrt_helper(sqrt + 1, n));
}
