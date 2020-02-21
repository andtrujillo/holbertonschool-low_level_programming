#include "holberton.h"
/**
 * _strncpy -  Function that copies a string
 * @dest: Pointer to destination array where the content is copied
 * @src: This is the string to be copied
 * @n: The number of characters to be copied
 * Return: character array of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * _strlen - Function that counts string length
 * @s: string of function
 * Return: integer
 */
int _strlen(char *s)
{
	int length;

	while (*s++)
		length++;
	return (length);
}
