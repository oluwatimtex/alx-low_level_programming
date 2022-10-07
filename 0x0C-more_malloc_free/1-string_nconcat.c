#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int f1, f2, fstr, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (f1 = 0; s1[f1] != '\0'; f1++)
		;

	for (f2 = 0; s2[f2] != '\0'; f2++)
		;

	if (n > f2)
		n = f2;

	fstr = f1 + n;

	str = malloc(fstr + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < fstr; i++)
		if (i < f1)
			str[i] = s1[i];
		else
			str[i] = s2[i - f1];

	str[i] = '\0';

	return (str);
}
