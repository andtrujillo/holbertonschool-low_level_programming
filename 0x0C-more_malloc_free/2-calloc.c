
#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb:  n array of elements
 * @size: of size bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *set_mem;
	unsigned int index;
	void *vptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	set_mem = malloc(nmemb * size);

	vptr = set_mem;
	if (set_mem == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		set_mem[index] = 0;
	return (vptr);
}
