#include<stdio.h>

/**
 * main - prints all base 16 characters
 *
 * Return: function returns 0
 */
int main(void)
{
	char hexa[16] = "0123456789abcdef";
	int counter;

	for (counter = 0; counter < 16; counter++)
	{
		putchar(hexa[counter]);
	}
	putchar('\n');
	return (0);
}
