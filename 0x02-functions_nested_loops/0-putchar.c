#include<stdio.h>

/**
 * main - main function returns _putchar
 *
 * Return: main function returns 0
 */
int main(void)
{
	char word[] = "_putchar";
	int count = 0;

	for (count = 0; count < 8; count++)
	{
		putchar(word[count]);
	}
	putchar('\n');
	return (0);
}
