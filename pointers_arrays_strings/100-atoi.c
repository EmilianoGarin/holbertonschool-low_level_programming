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
	int sep[];
	char sig = NULL;

	while (*(s + x) != '\0')
	{
		if ((*(s + x) > 47) && (*(s + x) < 59))
			{
			if ((sig == NULL) && (x > 0) && (*(s + x - 1) == '-'))
					sig = '-';
			sep[cont] = (*(s + x) - 48);
			cont++;
			}
		x++;
	}

	for (x = cont - 1; x > -1; x--)
		{
		ret = (sep[x] * pot);
		pot = pot * 10;
		}
	if (sig != NULL)
		ret = ret * -1;
	return (ret);
}
