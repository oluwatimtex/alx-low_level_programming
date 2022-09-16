#include "main.h"

/**
 * _isupper - function checks for upper case alphabets
 * @c: an integer parameter
 * Return: something other than success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return ("%d: 1", c);
	}
	else
	{
		return ("%d: 0", c);
	}
}
