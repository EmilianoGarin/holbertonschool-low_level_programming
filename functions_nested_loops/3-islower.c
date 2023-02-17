

/**
 * _islower - receive a int
 *
 *@c: ascii decimal
 *
 * Description: size
 *
 * Return: 1 if c is lowercase, 0 in oder case
 */


int _islower(int c)
{

	if (c > 96 || c < 123)
		return (1);
	return (0);
}
