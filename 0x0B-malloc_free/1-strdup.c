#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer of an array of char
 */
char *_strdup(char *str)
{
	char *newstring;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	newstring = (char *)malloc(sizeof(char) * (i + 1));

	if (newstring == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newstring[j] = str[j];

	return (newstring);

}
