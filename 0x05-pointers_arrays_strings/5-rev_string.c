#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @string: character string array to be flipped via pointer
 * Return: 0
 */
void rev_string(char *s)
{
	char *copy = s;
	char rev;

	while (*copy)
		copy++; 	
	copy = copy - 1;
	while (s < copy)
	{
		rev = *s;	
		*s++ = *copy;
		*copy-- = rev;
	}
}
