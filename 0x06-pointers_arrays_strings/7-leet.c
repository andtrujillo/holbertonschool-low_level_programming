#include "holberton.h"
/**
 * leet - translating string to leet speak
 * @un_leet: character array to be converted to 1337
 * Return: string conversion to 1337
 */
char *leet(char *un_leet)
{
	int i, j;
	int leet_length = _strlen(un_leet);
	char *characters = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; un_leet[i] < leet_length; i++)
	{
		for (j = 0; j < _strlen(characters); j++)
		{
			if (characters[j] == un_leet[i])
				un_leet[i] = leet[j];
		}
	}
	return (un_leet);
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
