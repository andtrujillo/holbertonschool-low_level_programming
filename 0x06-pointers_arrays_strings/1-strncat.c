#include "holberton.h"
/**
 * _strncat - Function that concatenates two strings
 * @dest: String that gets the concated string from 'src'
 * @src: String that gets appended to 'dest'
 * Return: pointer character array dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = _strlen(dest);
	int length_src = _strlen(src);
	int i = 0;
	
	for (i = 0; i < n; i++)
	{
		if(src[i] != '\0')
			dest[i + dest_length] = src[i];
		else
			break;
	}

	if(length_src < n)
		dest[dest_length + i] = '\0';

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
