#include <ctype.h>
#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * strtow - function that splits a string into words
 *
 * @s: string to parse
 * Return: An array of characters
 *
 */
char **strtow(char *s)
{
	char **a;
	int x = 0, j = 0, inWord = 0, n = 0;

	if (s == 0 || *s == '\0')
		return (NULL);

	int string_length = _strlen(s);
	char *ptr = s;
	char *start;
	char *end;
	int i = 0;
	while (*s)
	{
		if (*s == ' ')
			s++;

		if (*s >= '!' && *s <= '~')
		{
			if(!inWord)
			{
				x++;
				inWord = 1;
				start = s;
				printf("Start Address of %d word:%p\nValue:%c\n", i++, start, *s);
			}
			

			if (*(s + 1) == ' ')
			{
				inWord = 0;
				end = s;
				printf("End Address of %d word:%p\nValue:%c\n", j++, end, *s);
			}

			printf("%c\n", *s);
			n++;
			s++;
		}
	}
	printf("Null:%d\n", x);
	printf("Total:%d\n", n);
	printf("Pointer Start:%p\n", ptr);
	printf("Pointer End:%p\n", s);
	printf("Pointer difference:%ld\n", s - ptr);
	s = ptr;
	printf("Pointer Reset:%p\n", s);
	a = malloc(sizeof(char) * n + x);



/*	printf("%d\n%s\n", string_length, s); */
	return (a);
}
/**
* _strlen - length of string
* @str: string to find the length of
* Return: integer of the length of string
*/
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
