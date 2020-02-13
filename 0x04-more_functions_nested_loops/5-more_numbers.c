#include "holberton.h"
/**
 * more_numbers - Function that prints ten times the numbers 0 - 14
 * Return: none
 */
void more_numbers(void)
{
	int i, j, temp_1, temp_2;

	for (i = 0; i < 10;i++)
	{
		for (j = 0;j <= 14; j++)
		{
			temp_1 = j;
			temp_2 = i;

			if (temp_1 > 9)
			{	
				temp_1 = j / 10;
				temp_2 = j % 10;
			}
				_putchar(temp_1 + '0');	
		}
			_putchar(temp_2 + '0'); /* because 10s place only goes to ones place so therefore the first  */
															/* number to print over and over first ten times can be i */
														  /* then I print both j at 10s place */

		}
	}
	_putchar('\n');
}
