/**
 * _isupper - empty point
 *
 * Description: filter between uppercase or not
 *
 *@c: ascii decimal
 *
 * Return: 1 if is uppercase, in other case 0
 */

int _isupper(int c)
{

	if ((c < 91) && (c > 64))
		return (1);
	return (0);
}
