#include "holberton.h"
/**
 * rot13 - encoding a string to rot13
 * @rot_str: character array to be encoded
 * Return: character array encoded
 */
char *rot13(char *rot_str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; i < _strlen(rot_str); i++)
	{
		for (j = 0; j < _strlen(output); j++)
		{
			if (rot_str[i] == input[j])
				rot_str[i] = output[j];
		}
	}

	return (rot_str);
}
/**
 * _strlen - function that counts length of string
 * @s: string to determine length
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;
	while (*s++)
		l++;
	return (l);
}
