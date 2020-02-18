#include "holberton.h"
/**
* print_array - prints n elements of an array of integers
* @a: array of integers
* @n: integer of elements to be printed
* Return: void
*/
void print_array(int *a, int n)
{
	int size = 0;
	int i, hasPrinted = 0;

	for (i = 0; i < n; i++)
	{
		if (hasPrinted)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", a[i]);
		hasPrinted = 1;
	}
	putchar('\n');
}
