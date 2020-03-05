
#include "holberton.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the amount of bytes to allocate
 * Return: void - set memory only
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
