#include <stdio.h>
/**
 * times_table - empty
 *
 * Description: 9 times table
 *
 * Return: empty
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
		for (y = 0; y < 10; y++)
		{
			printf("% 3d", x * y);
			if (y == 9)
				printf("$\n");
			else
				printf(",");
		}
}
