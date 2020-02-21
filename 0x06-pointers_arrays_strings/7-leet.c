#include "holberton.h"
/**
 * leet - translating string to leet speak
 * @un_leet: character array to be converted to 1337
 * Return: string conversion to 1337
 */
char *leet(char *un_leet)
{
	char characters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	unsigned int i, j;

	i = 0;
	while (un_leet[i])
	{
		j = 0;
		while (j < 11)
		{
			if (un_leet[i] == characters[j])
				un_leet[i] = leet[j];
			j++;
		}
		i++;
	}
	return (un_leet);
}
