#include "main.h"

/**
 * _isupper - function checks for upper case alphabets
 * @c: an integer parameter
 * Return: something other than success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
