#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lists;
	unsigned int count;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(lists, n);

	for (count = 0; count < n; count++)
		sum = sum + va_arg(lists, int);

	va_end(lists);

	return (sum);
}
