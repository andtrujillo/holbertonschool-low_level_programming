#include "holberton.h"
/**
* _strncpy -  Function that copies a string
* @dest: Pointer to destination array where the content is copied
* @src: This is the string to be copied
* @n: The number of characters to be copied
* Return: character array of copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n ; i++)
dest[i] = '\0';

return (dest);
}
