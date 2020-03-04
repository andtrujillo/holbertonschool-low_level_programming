#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments from main
 * @av: argument vector
 * Return: pointer to character array
 */

char *argstostr(int ac, char **av)
{
	int i, len = 0, x = 0, j;
	char *a;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		len += j;
	}
	a = malloc((ac + len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, x++)
			a[x] = av[i][j];

		a[x] = '\n';
		x += 1;
	}
	return (a);
}
/**
* _memcpy - function that copies memory
* @dest: destination string
* @src: source string from which to copy from
* @n: number of bytes to copy
* Return: character array
*/
char *_memcpy(char *dest, char *src, int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
/**
* _strlen - function that counts string length
* @s: string
* Return: integer type
*/
int _strlen(char *s)
{
	int i;

	while (*s++)
		i++;
	return (i);
}

