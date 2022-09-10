#include<stdio.h>

/**
 * main - the main function prints the single digit numbers of base 10 0-9
 *
 * Return: main function returns 0
 */

int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit < 10; single_digit++)
	{
		printf("%d", single_digit);
	}
	printf("\n");
	return (0);

}
