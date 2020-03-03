#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - function that copies a newly allocated string memory block
 * @str: pointer to character array
 * Return: character array of newly created memory address starting location
 */

char *_strdup(char *str)
{
char *ptr;
unsigned int i = 0;

if (str == NULL)
return (NULL);
while (str[i] != 0)
i++;
i++;
ptr = malloc(sizeof(char) * i);
for (i = 0; str[i] != NULL; i++)
ptr[i] = str[i];
ptr[i] = 0;
return (ptr);
}
