#include "main.h"

/**
 * binary_to_uint - converts to unsigned int from binary.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len, base_two;

	if (!b)
		return (0);

	result = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			result += base_two;
		}
	}

	return (result);
}
