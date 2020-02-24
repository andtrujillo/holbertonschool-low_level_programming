#include "holberton.h"
/**
 * _strchr - find first occurrence of character
 * @s: string to search for character
 * @c: character to find in string s
 */
char *_strchr(char *s, char c)
{
  while (*s++)
  {
    if (*s == c)
      break;
    else 
      return (0);
  }
  return (s);
}
