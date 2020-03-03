
#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 * @width: columns or width of array grid
 * @height: rows or height of array gird
 * Return: integer pointer to 2-dimensional 
 */
int **alloc_grid(int width, int height)
{
	int **ptr = 0;
	int i;

	if (!width || !height)
		return (ptr);
	else
	{
		ptr = (int **) malloc (sizeof(int*) * height);
		for (i = 0; i < height; i++)
			ptr[i] = (int *)malloc(width* sizeof(int));
	}
	return (ptr);
}
/**
  * _memset - Fills the first n bytes of the memory area
  * pointed to by @s with the constant byte @c.
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
