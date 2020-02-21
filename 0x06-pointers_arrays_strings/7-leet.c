#include "holberton.h"
/**
 * leet - translating string to leet speak
 * @un_leet: character array to be converted to 1337
 * Return: string conversion to 1337
 */
char *leet(char *un_leet)
{
	int i, j;
	char characters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; un_leet[i] != '\0'; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			if (un_leet[i] == characters[j])
				un_leet[i] == leet[j];

		}
	}
	return (un_leet);
}
