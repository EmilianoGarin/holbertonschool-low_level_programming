#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - empty point
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int rest;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	rest = n % 10;

	if (rest > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rest);
	} else if (rest < 6 && rest != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rest);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, rest);
	}

	return (0);
}
