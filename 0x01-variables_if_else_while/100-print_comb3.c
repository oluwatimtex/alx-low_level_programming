#include <stdio.h>

/**
 * main - the main function prints double digits
 *
 * Return: the main function returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1 ; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);

}
