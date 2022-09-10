#include<stdio.h>

/**
 * main - main function returns the alphabets in reverse
 *
 * Return: the main function returns 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int select;

	for (select = 25; select >= 0; select--)
	{
		putchar(alphabet[select]);
	}
	putchar('\n');
	return (0);

}
