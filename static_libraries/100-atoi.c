#include "main.h"

/**
 * _atoi - char to int
 *
 * @s: char pointer
 *
 * Description: change a char for your equibalent interger
 *
 * Return: a int
 */

int _atoi(char *s)
{
	int x = 0;
	int i = 0;
	int cont = 0;
	int ret = 0;
	int pot = 1;
	char sig = ' ';

	while (s[x] != '\0')
	{
		x++;
		if ((s[x - 1] > 47) && (s[x - 1] < 59))
		{
			cont++;
			if ((sig == ' ') && (x > 0) && (s[x - 2] == '-'))
				sig = '-';
			if (!((s[x] > 47) && (s[x] < 59)))
				break;
		}
	}

	i = x;
	for (x = x - 1; x > (i - cont) - 1 ; x--)
	{
		ret = ret + ((s[x] - 48) * pot);
		pot = pot * 10;
	}

	if (sig != ' ')
		ret = ret * -1;
	return (ret);
}
