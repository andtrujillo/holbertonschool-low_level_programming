#include "holberton.h"
/**
 * print_diagsums - function that prints the
 * sum of two diagonals of a square matrix of integers
 * @a: array of integers
 * @size: size of array of integers
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + 1;
		sum += *(a + k);
	}
	k = 0;
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		sum1 += *(a + k);
	}

	printf("%d, %d\n", sum, sum1);
}
