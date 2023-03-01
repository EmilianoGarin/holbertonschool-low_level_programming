#include "main.h"

/**
 * _strcmp - empty point
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Description: size
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int conts2 = 0;
	int conts1 = 0;

	while (s1[x] != '\0')
	{
		conts1 = conts1 + s1[x];
		printf("conts1 = %d \n", conts1);
		x++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		conts2 = conts2 + s2[x];
		printf("conts2 = %d \n", conts2);
		x++;
	}

	return (conts1 - conts2);
}
