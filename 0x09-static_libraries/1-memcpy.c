#include  "holberton.h"
/**
* _memcpy - function that copies memory
* @dest: destination string
* @src: source string from which to copy from
* @n: number of bytes to copy
* Return: character array
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;

while (n--)
*d++ = *s++;
return (dest);
}
