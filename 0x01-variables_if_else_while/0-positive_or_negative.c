#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - given an integer n
 * the function returns whether integer is positive or negative
 *
 * Return: returns whether the number is zero, positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
}
