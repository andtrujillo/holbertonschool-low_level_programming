#include "holberton.h"
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int outer, inner, multiplier;

	if (n < 0 || n > 15)
		return;
	
	for (outer = 0; outer <= n; outer++)
	{
		for (inner = 0; inner <= n; inner++)
		{
			multiplied = outer * inner;
			
			if (multiplied >= 100)	/* Number is three digits wide */
			{						/* so takes comma and space */
				_putchar((multiplied / 100) + '0'); /* in front */
				_putchar((multiplied / 10 % 10) + '0');
				_putchar((multiplied % 10) + '0');
			}
			else if (multiplied >= 10)	/* Number is two digits wide */
			{							/* adding two spaces plus one */	
				_putchar(' ');
				_putchar((multiplied / 10) + '0');
				_putchar((multiplied % 10) + '0');
			}
		
			else if (inner != 0)		/* Only prints two more spaces*/
			{							/* if not at second number */	
				_putchar(' ');			/* Prints second number with */
				_putchar(' ');			/* two spaces except first digit */
				_putchar(multiplied + '0');
			}
			else
			{								/* Number is smaller than */
				_putchar(multiplied + '0'); /* 100 and 10 so it prints*/
			}								/* single digit */
			
			if(inner != n)				/* Prints comma and space */
			{							/* while j is looping */
				_putchar(',');			/* wont print at last number */
				_putchar(' ');
			}
				
		}
		_putchar('\n');
	}
}
