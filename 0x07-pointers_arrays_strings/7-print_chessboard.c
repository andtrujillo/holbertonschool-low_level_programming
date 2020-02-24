#include "holberton.h"
/**
 * print_chessboard - function that prints chessboard
 * @a: size of chessboard
 * Return: none (void)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != '\0')
				_putchar(a[i][j]);
			else
				_putchar('\n');
		}
		_putchar('\n');
	}

}
