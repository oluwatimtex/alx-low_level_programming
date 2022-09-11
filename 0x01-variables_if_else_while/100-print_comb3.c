#include <stdio.h>

/**
 * main - the main function prints double digits
 *
 * Return: the main function returns 0
 */
int main(void)
{
	int digit[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int count1, count2;
	count1 = 0;
	count2 = 0;

	while (digit[count2] < 10)
	{
		count1 = 0;
		while (digit[count1] < 10)
		{
			if (digit[count2] != digit[count1] && digit[count2] < digit[count1])
			{
				putchar(digit[count2]);
				putchar(digit[count1]);
				if (i == 9 && e == 8)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			count1++;
		}														}
		count2++;
	}
	putchar('\n');
	return (0);

}
