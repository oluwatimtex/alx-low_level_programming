#include<stdio.h>
#include "main.h"

/**
 *
 *
 *
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

