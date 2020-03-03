#include "holberton.h"
/**
 * str_concat - function that concats two strings
 * @s1: string one
 * @s2: string two
 * Return: character array of newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int *ptr = '\0';

	if (!*s1 || !*s2)
		return (ptr);
	else
		ptr = (int *)malloc(_strlen(s1) + _strlen(s2) + 1 * sizeof(int));

	if (ptr)
	{
		ptr = _strcpy(ptr, s1);
		ptr = _strcat(ptr, s2);	
	}

	return (ptr);
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
