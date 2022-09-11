#include<stdio.h>

/**
 * main - the main function returns all combo of single digit
 *
 * Return: the main function returns 0
 */
int main(void)
{
	int combo[2][10] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
	int counter1, counter2;

	for (counter1 = 0; counter1 < 2; counter1++)
	{
		for (counter2 = 0; counter2 < 10; counter2++)
		{
			putchar((combo[counter1][counter2] % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
