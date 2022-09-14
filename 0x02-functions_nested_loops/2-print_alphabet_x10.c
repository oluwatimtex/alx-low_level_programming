#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - function returns alpahbet in lower case 10 times
 *
 * No return case its a void type
 */

void print_alphabet_x10(void)
{
	char alphabet, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

