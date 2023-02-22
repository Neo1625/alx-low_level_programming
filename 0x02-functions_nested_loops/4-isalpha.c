#include "main.h"

/**
 * _isalpha - Determinnes whether c is alpha
 * @c: The character to input
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int _isalpha(int c);

int _isalpha(int c)
{
	int isAlpha = 1;

	if (c < 65 || c > 90)
	{
		isAlpha  = 0;
	}
	return (isAlpha);
}
