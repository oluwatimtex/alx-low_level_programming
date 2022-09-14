#include<stdio.h>

/**
 * main - main function returns _putchar
 *
 * Return: main function returns 0
 */
int main(void)
{
	char word[] = "_putchar";

	for (int count = 0; count < 8; count++)
	{
		putchar(word[count]);
	}
	putchar('\n');
	return (0);
}
