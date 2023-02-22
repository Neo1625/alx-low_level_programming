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
	int last_digit = t % 10;

	return (last_digit);
}
