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
		for (j = 0; j < 53; j++)
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
