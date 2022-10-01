#include <stdio.h>

/**
 * main - prints input, followed by a new line
 * @argc: number of command line argument
 * @argv: array that contains argc
 * Return: int function returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
