#include <stdio.h>
#include "_putchar.c"

/**
 * main - prints the name of a file
 * Return: returns 0
 */
int main(void)
{
	_putchar("name of compiled file: %s\n", __FILE__);
	return (0);
}
