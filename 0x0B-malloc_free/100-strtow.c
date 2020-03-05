#include <ctype.h>
#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
int wc(char *str);
int wlen(char *s);

/**
 * strtow - function that splits a string into words
 *
 * @s: string to parse
 * Return: An array of characters
 *
 */
char **strtow(char *s)
{
	char **a;
	int j, string_length = 0, i = 0, x = 0, b = 0, k = 0;

	if (s == NULL || s[0] == '\0')
		return (NULL);

	string_length = wc(s);
	if (string_length == 0)
		return (NULL);

	a = malloc(sizeof(char *) * (string_length + 1));
	if (a == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		while (s[i] == ' ' && s[i] != '\0')
			i++;
		if (s[i] == '\0')
		{
			a[x] = NULL;
			return (a);
		}
		a[x] = malloc(sizeof(char) * wlen(s + i) + 1);
		if (a[x] == NULL)
		{
			for (b = x; b > 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}

		k = wlen(s + i);
		for (j = 0; j < k && s[i] != '\0'; j++, i++)
			a[x][j] = s[i];

		a[x][j] = '\0';
		x++;
	}
	a[x] = NULL;
	return (a);
}
/**
* wlen - word length of string
* @str: string to find the length of
* Return: integer word length of string
*/
int wlen(char *str)
{
	int length = 0;
	int o = 0;

	while (*(str + o) != ' ' && *(str + o) != '\0')
	{
		length++;
		o++;
	}
	return (length);
}
/**
 * wc - word count
 * @str: string to count words
 * Return: integer value
 */
int wc(char *str)
{
	int x, count;

	x = 0;
	count = 0;
	while (str[x]  != '\0')
	{
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] != '\0'))
			count++;
		x++;
	}
	return (count);
}
