
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * initializes it with a specific char
 * @size: size of array of characters
 * @c: character to initialize array
 * Return: address to first element of character array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	char *s = malloc(size * sizeof(char));

	str = s;

	if (s == NULL || size == 0)
		return (0);

	do {

		s[i] = c;
		i++;
	} while (i < size);

	return (str);
}

