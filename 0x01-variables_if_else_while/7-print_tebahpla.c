#include<stdio.h>

/**
 * main - main function returns the alphabets in reverse 
 *
 * Return: the main function returns 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (alphabet = 26; alphabet > 0; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);

}
