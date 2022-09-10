#include <stdio.h>

/**
 * main - Prints the alphabet in lower and upper case
 *
 * Return: main function returns 0
 */

int main(void)

{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int character;

	for (character = 0; character < 52; character++)
	{
		putchar(alphabet[character]);
	}

	putchar('\n');
	return (0);

}
