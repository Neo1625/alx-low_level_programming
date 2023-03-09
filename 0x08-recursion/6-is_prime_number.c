#include "main.h"

int check_prime(int i, int n);
/**
 * check_prime - chekcs to see if number is prime.
 * @n: Integer input.
 * @i: possible prime number.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int i, int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}

	return (check_prime(i + 1, n));
}

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: Integer input.
 *
 * Return: Return 1 or 0.
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (check_prime(2, n));
}
