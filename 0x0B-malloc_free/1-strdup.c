
#include "holberton.h"

/**
 * _strdup - function that copies a newly allocated string memory block
 * @str: pointer to character array
 * Return: character array of newly created memory address starting location
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int l = _strlen(str);

	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc(l + 1);

	if (ptr == NULL)
		return (NULL);

	while (i <= l)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	/*_memcpy(ptr, str, _strlen(str));*/

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

	while (s[i] != '\0')
		i++;

	return (i);
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
