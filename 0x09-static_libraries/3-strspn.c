#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String to be scanned.
 * @accept: Set of characters to be searched in 's'.
 *
 * Return: Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	unsigned int j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}

	return (i);
}
