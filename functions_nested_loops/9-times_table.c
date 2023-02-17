#include <stdio.h>

/**
 * _islower - receive a int
 *
 *
 * Description: size
 *
 * Return: 1 if c is lowercase, 0 in oder case
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
		for (y = 0; y < 10; y++)
		{
			printf("%d", x*y);
			if (y == 9)
				printf("$\n");
			else
				printf(",  ");
		}
}
