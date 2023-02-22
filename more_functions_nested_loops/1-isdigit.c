/**
 * _isdigit - receive a int
 *
 *@c: ascii decimal
 *
 * Description: filter between numbers or other char
 *
 * Return: 1 if c is number, 0 in oder case
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);

}
