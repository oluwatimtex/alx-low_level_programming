#include <stdio.h>

/**
 * main - the main function prints double digits
 *
 * Return: the main function returns 0
 */
int main(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 9; count1++)
	{
		for (count2 = count1++; count2 < 10; count2++)
		{
			putchar((count1 % 10) + '0');
			putchar((count2 % 10) + '0');

			if (count1 == 8 && count2 == 9)
			{
				break;
			}
	
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}

