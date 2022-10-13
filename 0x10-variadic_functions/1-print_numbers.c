#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lists;
	unsigned int count;

	va_start(lists, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(lists, int));
		if (seperator && count < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(lists)
}
