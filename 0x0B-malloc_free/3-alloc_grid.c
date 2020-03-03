#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: columns or width of array grid
 * @height: rows or height of array gird
 * Return: integer pointer to 2-dimensional
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
/**
  * _memset - Fills the first n bytes of the memory area
  * pointed to by @s with the constant byte @c.
  *
  * @s: A pointer to the memory area to be filled.
  * @b: The character to fill the memory area with.
  * @n: The number of bytes to be filled.
  *
  * Return: A pointer to the filled memory area @s.
  */
int *_memset(int *s, int b, unsigned int n)
{
	int *dest = s;

	while (n-- > 0)
		*dest++ = b;
	return (s);
}
