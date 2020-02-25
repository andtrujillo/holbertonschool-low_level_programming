#include "holberton.h"
/**
 * print_diagsums - function that prints the
 * sum of two diagonals of a square matrix of integers
 * @a: array of integers
 * @size: size of array of integers
 */
void print_diagsums(int *a, int size)
{
	int i, k, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 += a[i];
	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)
		sum2 += a[k];
	printf("%d, %d\n", sum1, sum2);
}
