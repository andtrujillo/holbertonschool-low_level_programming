#include "holberton.h"
/**
 * cap_string - function that capitalizes all lowercase characters
 * @s: lowercase string to be capitalized
 * Return: character array of strings capitalized from lowercase
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i + 1] == '\0')
			break;

		if ((s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
					s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
					s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\n' ||
					s[i] == '\t')  && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
	}
	return (s);
}
