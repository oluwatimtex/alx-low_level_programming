#include<stdio.h>
#include "_putchar"
/**
 * main - function print the content of function print_alphabet
 * print_alphabet - prints alphaet in small letters
 * Return: main function return 0
 */
int main(void)
{
	_putchar(print_alphabet());
	return (0);
}

void print_alphabet(void)
{
	_putchar('abcdefghijklmnopqrstuvwxyz');
	return;

}
