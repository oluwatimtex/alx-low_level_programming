#include <stdio.h>

/**
 * main - main function prints combo of 3 digits
 *
 * Return: main function returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;


	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1 ; j <= '9'; j++)
		{
			for(k = j + 1; k < 10; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == '8' && j == '9' && k == 10)
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
	}
	return (0);

}
