#include<stdio.h>
#include "main.h"

/**
 * main - function print the content of function print_alphabet
 * print_alphabet - prints alphaet in small letters
 * Return: main function return 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
