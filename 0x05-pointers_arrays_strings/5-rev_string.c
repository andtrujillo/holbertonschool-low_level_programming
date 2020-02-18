#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @string: character string array to be flipped via pointer
 * Return: 0
 */
void rev_string(char *string)
{
	char *src = string;
	char rev_string[_strlen(string)];
	int i, j;

	for (i = _strlen(string) - 1, j = 0; i >= 0, j < _strlen(string); i--, j++)
		rev_string[j] = string[i];

	for (i = 0; i < sizeof(rev_string); i++)
		string[i] = rev_string[i];
	_putchar('\n');
}
/**
 * _strlen - Function that counts the characters in array
 * @src: pointer to char array
 * Return: integer
 */
int _strlen(char *src)
{
	int length = 0;

	while (*src++)
		length++;
	return (length);
}
