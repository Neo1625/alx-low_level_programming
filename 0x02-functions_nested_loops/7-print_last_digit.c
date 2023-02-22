#include "main.h"

/**
 * print_last_digit - Returns the last digit of a number
 * @int: Integer input
 *
 * Return: Always the ast digit of a number
 */
int print_last_digit(int);

int print_last_digit(int t)
{
	int id = t % 10;

	if (id < 0)
	{
		id = id * -1;
	}
	_putchar(id + '0');
	return (id);
}
