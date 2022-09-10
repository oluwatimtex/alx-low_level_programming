#include<stdio.h>

/**
 * main - Prints the alphabet in low case
 *
 * Return: main function returns 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int character;

	for (character = 0; character < 26; character++)
	{
		putchar(alphabet[character]);
	}
	putchar('\n');
	return (0);

}
