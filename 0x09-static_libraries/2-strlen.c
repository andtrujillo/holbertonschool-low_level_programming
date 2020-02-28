#include "holberton.h"
/**
* _strlen - Function that counts the characters in array
* @src: pointer to char array
* Return: integer
*/
int _strlen(char *src)
{
int length = 0;

while (*src++)
length++;
return (length);
}
