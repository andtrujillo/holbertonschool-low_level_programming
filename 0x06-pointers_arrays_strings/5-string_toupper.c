#include "holberton.h"
/**
 * string_toupper - function that converts entire text to
 * an uppercase value
 * @s: character array
 * Return: character array after conversion
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
else
{
s[i] = s[i];
}
}
return (s);
}
