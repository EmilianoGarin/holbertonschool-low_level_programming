#include <stdio.h>

/**
 * jack_bauer - empty
 *
 * Description: clock
 *
 * Return: empty
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 60; h++)
		for (m = 0; m < 60; m++)
			printf("%.2d:%.2d\n", h, m);
}
