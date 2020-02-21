#include "holberton.h"
/**
 * leet - translating string to leet speak
 * @un_leet: character array to be converted to 1337
 * Return: string conversion to 1337
 */
char *leet(char *un_leet)
{
	char characters[] = "aeotlAEOTL";
	char leet[] = "43071";
	unsigned int i, j;

	i = 0;
	while (un_leet[i])
	{
		j = 0;
		while (j < 5)
		{
			if (un_leet[i] == characters[j] || un_leet[i] == characters[j + 5])
				un_leet[i] = leet[j];
			else
				un_leet[i] = un_leet[i];
			j++;
		}
		i++;
	}
	return (un_leet);
}
