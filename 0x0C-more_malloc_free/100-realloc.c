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
		cptr = malloc(new_);
		while(n--)
			*cptr++ = *ptr++;
		free(ptr);
		return (cptr);
	}

	if (new_ == old_)
		return (ptr);

	if (new_ == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	cptr = malloc(new_);
	if (cptr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
ptr = malloc(newsize_);
		return (ptr);
	}
	while(new_--)
		*cptr++ = *save++;
	free(ptr);
	return (cptr);
}
