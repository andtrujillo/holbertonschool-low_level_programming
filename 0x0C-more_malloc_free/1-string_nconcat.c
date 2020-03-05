#include "holberton.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string to append to
 * @s2: second string to copy from
 * Return: character array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int tl, i, l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	
	tl = _strlen(s1) + _strlen(s2);
	str = malloc((1 + tl) * sizeof(char));
	
	if (str == NULL)
		return (NULL);
	if (n > _strlen(s2))
		n = _strlen(s2);
	
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (l = 0; l < n && s2[l] != '\0'; l++)
		str[i + l] = s2[l];
	str[i + l] = '\0';
	return (str);
}
/**
 * _strlen - function that computes length of string
 * @s: string
 * Return: integer value
 */
unsigned int _strlen(char *s)
{
	int i = 0;
	while(*s++)
		i++;
	return (i);
}
