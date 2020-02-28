#include "holberton.h"
/**
* _strstr - function that locates a substring
* @haystack: string to be searched
* @needle: sub string
* Return: character array addres of the start of substring
*/
char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;

while (*h == *n && (*n != '\0'))
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
