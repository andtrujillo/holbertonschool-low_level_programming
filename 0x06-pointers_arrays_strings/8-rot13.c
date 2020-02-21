#include "holberton.h"
/**
 * rot13 - encoding a string to rot13
 * @rot_str: character array to be encoded
 * Return: character array encoded
 */
char *rot13(char *rot_str)
{
	char a1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char a2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i, j;

	for (i = 0; rot_str[i] != '\0'; i++)
	{
		for (j = 0; j < _strlen(a2); j++)
		{
			if (rot_str[i] == a1[j])
			{
				rot_str[i] = a2[j];
				break;
			}
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
