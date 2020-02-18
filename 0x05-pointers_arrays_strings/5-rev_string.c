#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @string: character string array to be flipped via pointer
 * Return: 0
 */
void rev_string(char *string)
{
	int i = 0;
	int j = 0;
	int k;
	int rev_string[90];

	while (string[i] != '\0')
		i++;
	k = i;
	while ((i != 0) && (string[j] != '\0'))
	{
		rev_string[i] = string[j];
		j++;
		i--;
	}
	i = 0;
	while ((rev_string[i] != '\0') && (i < k))
	{
		string[i] = rev_string[i + 1];
		i++;
	}
}
