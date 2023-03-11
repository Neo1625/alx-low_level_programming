#include <unistd.h>

/**
 * _putchar - my func to write character c to stdout
 * @c: Character input.
 *
 * Return: 1 on success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
