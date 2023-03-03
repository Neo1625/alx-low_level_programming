#include "main.h"

/**
 * cap_string - Function that capitalizes all strings
 * @str: String input.
 *
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	char sep[] = " \t\n,;.!?\"(){}";

	int str_len = 0, sep_len;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str_len == 0)
			{
				str[i] -= 'a' - 'A';
			}
			else
			{
				for (sep_len = 0; sep_len <= 12; sep_len++)
					if (a[sep_len] == str[i - 1])
					{
						str[i] -= 'a' - 'A';
					}
				}
		}
		str_len++;
	}
	return (str);
}
