
#include "holberton.h"

/**
 * _strdup - function that copies a newly allocated string memory block
 * @str: pointer to character array
 * Return: character array of newly created memory address starting location
 */

char *_strdup(char *str)
{
	char *ptr;
	int c, i = 0;
	
	for (c = 0; str[c]; c++)
				;
		c += 1;
	
	if (str == NULL)
		return (NULL);

	ptr = malloc(c);

	if (ptr == NULL)
		return (NULL);

	while (i < c)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
