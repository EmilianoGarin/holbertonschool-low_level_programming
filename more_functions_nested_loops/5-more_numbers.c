#include "main.h"

/**
 * more_numbers - empty point
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(49);
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
