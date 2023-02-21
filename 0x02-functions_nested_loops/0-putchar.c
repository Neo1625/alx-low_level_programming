#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char word[] = "_putchar";

	int i = 0;

	while (word[i] != '\n')
	{
		putchar(word[i]);
		i++;
	}
	return (0);
}
