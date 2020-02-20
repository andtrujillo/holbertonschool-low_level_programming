#include "holberton.h"
/**
 * reverse_array - function that reverses contents of array
 * @rev_arr: array to be reversed
 * @length_arr: length of array
 */
void reverse_array(int *rev_array, int length_arr)
{
	int i, j;
	int flipped[length_arr];

	for (i = 0; i < length_arr ; i++)
	{
		flipped[i] = rev_array[i];
	}
	for (j = 0, i = length_arr - 1; i >= 0 && j < length_arr; i--, j++)
	{
		rev_array[j] = flipped[i];
	}
}
