#include<stdio.h>

/**
 * main - the main function prints the single digit numbers of base 10 0-9
 *
 * Return: main function returns 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		int single = digit;
		putchar(single);
	}
	putchar('\n');
	return (0);

}
