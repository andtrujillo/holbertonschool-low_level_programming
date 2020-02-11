#include "holberton.h"
/**
 * times_table - Prints times table starting with 0
 * 
 * Return: none
 */

void times_table(void)
{
	int i, k, sum, hasPrinted = 0;

	for (i = 0; i < 10; i++)
	{
		hasPrinted = 0;
		for (k = 0; k < 10; k++)
		{
			sum = i * k;
			
			if (hasPrinted)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (sum > 9) 
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}else
			{	
				_putchar(' ');
				_putchar((i * k) + '0');
			}

			hasPrinted = 1;
		}
		_putchar('\n');
	}
}
