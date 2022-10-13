#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lists;
	unsigned int count;
	char *str;

	va_start(lists, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (seperator && count < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(lists);
}
