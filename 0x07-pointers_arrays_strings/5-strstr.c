#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: sub string
 * Return: character array addres of the start of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack; haystack++)
	{
		for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
		{
			if (*n == 0)
				return (haystack);
		}
	}
	return (0);
}
