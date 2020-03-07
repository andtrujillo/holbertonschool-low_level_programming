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
	int b = 0;

	if (new_ > old_)
		b = old_;
	else
		b = new_;

	if (new_ == old_)
		return (ptr);

	if (new_ == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	cptr = malloc(sizeof(char) * new_);
	if (!cptr)
		return (NULL);

	if (ptr != NULL)
	{
		while (b--)
			*cptr++ = *save++;

		free(ptr);
	{
	return (cptr);
}
