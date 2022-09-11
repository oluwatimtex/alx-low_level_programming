#include<stdio.h>

/**
 * main - the main function returns all combo of single digit
 *
 * Return: the main function returns 0
 */
int main(void)
{
	int combo[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int counter1;

	for (counter1 = 0; counter1 < 10; counter1++)
	{
		putchar((combo[counter1] % 10) + '0');
		if (counter1 <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
