#include "holberton.h"
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
