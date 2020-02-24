#include "holberton.h"
/**
 * set_string - function that sets the value of a pointer to a character
 * @s: string to be modified
 * @to: string to copy from
 * Return: none (void)
 */
void set_string(char **s, char *to)
{
	printf("%p\n",**s);
	printf("%p\n", &s);
	printf("%s\n", *s);
	printf("%s\n", *to);
 **s = *to;
//*s = _memset(s, to, _strlen(to));	
}
int _strlen(char *s)
{
	int length = 0;
	while(*s++)
		length++;
	return (length);
}
char *_memset(char *s, char b, unsigned int n)
{
	char *dest = s;

	while (n-- > 0)
		*dest++ = b;

	return (s);
}

