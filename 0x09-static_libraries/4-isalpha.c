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
	int isAlpha = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		isAlpha  = 1;
	}
	return (isAlpha);
}
