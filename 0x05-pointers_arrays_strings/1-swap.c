#include "holberton.h"
/**
 * swap_int - Function that swaps integers
 * Description: Two parameter pointers that will have swapped values
 * @first: First integer to be swapped
 * @second: Second integer to be swapped with integer 'first'
 * Return: void
 */
void swap_int(int *first, int *second)
{
	int swap_first = *first;
	int swap_second = *second;

	*first = swap_second;
	*second = swap_first;
}
