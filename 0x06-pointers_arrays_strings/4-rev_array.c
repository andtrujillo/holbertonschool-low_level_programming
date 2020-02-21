#include "holberton.h"
/**
 * reverse_array - function that reverses contents of array
 * @rev_arr: array to be reversed
 * @length_arr: length of array
 */
void reverse_array(int *rev_arr, int length_arr)
{
	int tmp;
	int i, j;

	i = 0;
	j = length_arr - 1;

	while (i < j)
	{
		tmp = rev_arr[i];
		rev_arr[i] = rev_arr[j];
		rev_arr[j] = tmp;
		i++;
		j--;
	}
}
