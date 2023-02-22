#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Integer input
 *
 * Return: Returns 1 if n > 0 or 0 if n is 0 or -1 if n is negative
 */
int print_sign(int n);

int print_sign(int n)
{
	int signNum;

	if (n > 0)
	{
		signNum = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		signNum = 0;
		_putchar('0');
	}
	else
	{
		signNum = -1;
		_putchar('-');
	}
	return (signNum);
}
