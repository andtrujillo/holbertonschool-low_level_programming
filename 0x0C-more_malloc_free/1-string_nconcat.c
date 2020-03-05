#include "holberton.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string to append to
 * @s2: second string to copy from
 * Return: character array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int tl;
	char *str;
	char *save;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	tl = _strlen(s1);
	str = malloc((1 + tl + n) * sizeof(char));
	if (str == NULL)
		return (NULL);

	save = str;
	while (*s1)
		*str++ = *s1++;

	while (n--)
	{
		if (!*s2)
			*str++ = 0;
		else
			*str++ = *s2++;
	}
	*str = '\0';
	return (save);
}
/**
 * _strlen - function that computes length of string
 * @s: string
 * Return: integer value
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
