#include "holberton.h"
/**
* _strpbrk - function that locates the first occurence in
* the string of any bytes in the string
* @s: string s to search from
* @accept: set of bytes to match in s
* Return: a pointer to the byte in s that matches one of
* the bytes in acccept or null if none is found
*/
char *_strpbrk(char *s, char *accept)
{
	char *t;

	for (; *s; s++)
	{
		for (t = accept; *t; t++)
		{
			if (*t == *s)
			{
				return (s);
			}
		}
	}
	return (0);
}
