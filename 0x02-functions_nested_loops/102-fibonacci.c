#include <stdio.h>

/**
 * main – first 50 Fibonacci numbers, starting with 1 and 2
 * @void: main doesnt receive any parameter
 *
 * Return: function returns 0
 */
int main(void)

{
	long int i, j, k, next;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);

}
