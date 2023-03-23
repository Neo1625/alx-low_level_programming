#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Functions that sums up two numbers.
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - Function that multiplies two numbers.
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Return product if a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - Function that subtracts b from a.
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Returns the difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - Function that divides a by b.
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Returns the result of of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that finds the remainder of the
 * division of a by by.
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Returns the remainder of the
 * division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
