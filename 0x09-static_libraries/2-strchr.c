#include "holberton.h"
/**
* _strchr - find first occurrence of character
* @s: string to search for character
* @c: character to find in string s
* Return: pointer to address of first occurence
*/
char *_strchr(char *s, char c)
{
/**
* If a while is used before do as s is incrementing
* the first character will be ignored
*/
do {
/**
*  Dereferencing our string at position 's'
* so that we may compare it to character
*/
if (*s == c)
/**
*  We found the first occurrence its ok to
*  break
*/
return (s);
/**
* Increasing the address so that we can check the
* next character of s
*/
} while (*s++);
/**
* Returning zero or null if character isn't found at
* the end of the character array
*/
return (0);
}
