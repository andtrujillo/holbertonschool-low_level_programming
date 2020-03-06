#include "holberton.h"
/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: memory previously allocated with a call to malloc
 * @old_: old size in bytes of the allocated space for @param: ptr
 * @new_: new size to be allocated for @param: ptr
 * Return: void pointer to new block of allocated memory
 */
void *_realloc(void *ptr, unsigned int old_, unsigned int new_)
{
	char *cptr;
	char *save = ptr;	
	if (new_ > old_)
	{
		free(ptr);
		cptr = malloc(new_);
		return (cptr);
	}

	if (new_ == old_)
		return (ptr);

	if (new_ == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	while(new_--)
		*cptr++ = *save++;
	free(ptr);
	return (cptr);
}
