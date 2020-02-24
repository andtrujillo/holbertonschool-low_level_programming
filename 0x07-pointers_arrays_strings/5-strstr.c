#include "holberton.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: sub string
 * Return: character array addres of the start of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	for (; *haystack; haystack++)
	{
		for (h = needle; *h; h++)
		{
			if (*h == *needle)
				return (h);
		}
	}
}
