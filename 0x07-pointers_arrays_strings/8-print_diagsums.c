#include "holberton.h"
/* print_diagsums - function that prints the sum of two diagonals of a square matrix of integers
 * @a: array of integers
 * @size: size of array of integers
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_left, sum1;
	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if (i == j)
				sum_left += *(a + i * size + j);
			else if ((i + j) == (size - 1))
				sum1 += *(a + i * size + j);
		}
	}
	printf("%d, %d\n", sum_left, sum1);
}
