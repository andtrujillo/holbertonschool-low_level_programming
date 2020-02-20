
#include "holberton.h"
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
	{
		dest[i + dest_length] = src[i];
	}
	return (dest);
}
/**
* _strlen - length of string
* @str: string to find the length of
* Return: integer of the length of string
*/
int _strlen(char *str)
{
  int length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
