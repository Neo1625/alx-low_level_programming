#include "main.h"

/**
 * _islower - Function returns 1 if c is lower, 0 otherwise
 * @c: The character to check for lowecase
 *
 * Return: On success 1.
 * Otherwise, 0 is returned
 */
int _islower(int c);

int _islower(int c)
{
	int isLower = 1;

	if (c < 97 || c > 122)
	{
		isLower = 0;
	}
	return (isLower);
}
