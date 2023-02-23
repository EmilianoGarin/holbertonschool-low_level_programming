#include <stdio.h>

/**
 * main - empty point
 *
 * Description: FizzBuzz
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) != 0)
			printf("%d", i);
		printf(" ");
	}

	return (0);
}
