#include "main.h"

/**
 * _abs - Prints the absolute the value of given input
 * @int: Integer input
 *
 * Return: Returns the positive integer of a number
 */
int _abs(int);

int _abs(int t)
{
	if (t < 0)
	{
		t = *-1;
	}
	return (t);
}
