#include <stdio.h>

/**
 *
 * main - Prints the alphabet except q and e.
 *
 * Return: function returns 0
 */

int main(void)

{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int character;

	for (character = 0; character < 26; character++)
	{
		if ((char)alphabet[character] != "q" && (char)alphabet[character] != "e")
		{
			putchar(alphabet[character]);
		}
	}

	putchar('\n');
	return (0);

}
