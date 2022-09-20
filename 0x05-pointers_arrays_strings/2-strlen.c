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
	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
