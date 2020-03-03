#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - function that concats two strings
 * @s1: string one
 * @s2: string two
 * Return: character array of newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *dest;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	dest = malloc(k * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		dest[l] = s1[l];
	for (l = 0; l < j; l++)
		dest[l + i] = s2[l];

	dest[i + j] = '\0';
	return (dest);
}

/**
 * _strlen - function that counts string length
 * @s: string
 * Return: integer type
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
* _strcat - Function that concats two strings
* @dest: append string
* @src: string to be appened to dest
* Return: pointer to character array of the resulting string 'dest'
*/
char *_strcat(char *dest, char *src)
{
	int dest_length = _strlen(dest);
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i + dest_length] = src[i];
	return (dest);
}
/**
* _strcpy - copy destination string from source string
* @dest: char array to be copied to.
* @src: char array to be copied from.
* Return: pointer of type char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *save = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (save);
}
