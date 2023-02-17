/**
 * _isalpha - receive a int
 *
 *@c: ascii decimal
 *
 * Description: size
 *
 * Return: 1 if c is alphabet, 0 in oder case
 */


int _isalpha(int c)
{

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
