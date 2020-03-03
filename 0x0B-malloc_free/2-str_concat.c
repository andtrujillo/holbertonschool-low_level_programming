#include "holberton.h"
/**
 * str_concat - function that concats two strings
 * @s1: string one
 * @s2: string two
 * Return: character array of newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *dest = 0;
	char *ptr;
	int i, k = 0, len1, len2;
	
	for (len1 = 0; s1[len1] != 0; s1++)
		;
	for (len2 = 0; s2[len2] != 0; s2++)
		;
	dest = malloc(len1 + len2 + 1 * sizeof(char));
	ptr = dest;
 
    while (s1[i] != '\0' || s2[i] != '\0')
    {
		if (s1[i] == '\0' && s2 != '\0')
		{
			dest[i + k] = s2[k];
			k++;
		}
		else 
		{
			dest[i] = s1[i];	
			i++;
		}
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
