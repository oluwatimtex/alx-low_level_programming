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


	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1 ; j <= 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 8 && j == 9 && k == 10)
					continue;			
		
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
