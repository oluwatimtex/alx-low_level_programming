#include <stdio.h>
#include "main.h"

/**
 * _strlen - function gets the length of a string pointer
 *
 * @s: char passed to function
 *
 * Return: itn function returns length of char
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length = length + 1;
		*s = *s + 1;
	}
	return (len);
}
