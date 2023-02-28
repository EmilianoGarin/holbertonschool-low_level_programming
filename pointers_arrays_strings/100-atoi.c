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
	int cont = 0;
	int ret = 0;
	int pot = 1;
	int sep[20];
	char sig = ' ';

	while (*(s + x) != '\0')
	{
		if ((*(s + x) > 47) && (*(s + x) < 59))
		{
			if ((sig == ' ') && (x > 0) && (*(s + x - 1) == '-'))
					sig = '-';
			sep[cont] = (*(s + x) - 48);
			cont++;
			if (!((s[x + 1] > 47) && (s[x + 1] < 59)))
				break;
		}
		x++;
	}

	for (x = cont - 1; x > -1; x--)
		{
		ret = ret + (sep[x] * pot);
		pot = pot * 10;
		}
	if (sig != ' ')
		ret = ret * -1;
	return (ret);
}
