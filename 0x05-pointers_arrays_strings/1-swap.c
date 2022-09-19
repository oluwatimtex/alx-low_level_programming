#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 *
 * @a: integer 1
 *
 * @b: integer 2
 * Return: void function returns nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
