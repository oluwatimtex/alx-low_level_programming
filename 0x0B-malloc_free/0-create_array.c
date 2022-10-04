#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: storage of char
 *
 * Return: pointer of an array of char:wq
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	
	if (size == 0)
		return (NULL);

	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
