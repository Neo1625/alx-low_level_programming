#include "main.h"

int _sqrt_helper(int n, int low, int high);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Integer input/
 *
 * Return: natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n / 2));
	}
}

/**
 * _sqrt_helper - sqrt_recursion helper function.
 * @n: Integer input
 * @low: Integer input
 * @high: Integer input
 *
 * Return: Returns the natural square root
 */

int _sqrt_helper(int n, int low, int high)
{
	if (low > high)
	{
		return (-1);
	}

	int mid = (low + high) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
}
