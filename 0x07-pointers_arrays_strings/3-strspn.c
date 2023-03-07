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

	int count = 0;

	while (s[i] != '\0')
	{
		if (accept[j] == '\0')
			break;
		if (s[i] == accept[j])
			count++;
			j++;
		else
			j = 0;
		i++;
	}

	return (count);
}
