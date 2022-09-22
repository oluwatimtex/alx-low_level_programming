#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: void function returns nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j, hold;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			hold = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = hold;
		}
	}
}
