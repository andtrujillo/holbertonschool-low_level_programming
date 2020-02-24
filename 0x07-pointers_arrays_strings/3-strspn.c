#include "holberton.h"
int _strlen(char *s);
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string from which accepts is comparing to
 * @accept: substring to look for amount of occurrences
 * Return: unsigned integer value of occurrences
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int occ = 0;
	int i = 0, j = 0;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				occ++;
				break;
			}
			else if ((_strlen(accept) - 1) == j)
				return (occ);
		}
	}
	return (occ);
}
/**
 * _strlen - function that returns string length
 * @s: character array to find length of
 * Return: integer of amount of characters in length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
