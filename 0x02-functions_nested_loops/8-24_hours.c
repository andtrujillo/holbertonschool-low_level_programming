#include "holberton.h"
/**
 * jack_bauer - Function that prints every minute of the day for Jack Bauer
 * Return: none (void)
 */
void jack_bauer(void)
{
	int i, k;
	int hour1, hour0, min1, min0;

	for (i = 0; i < 24; i++)
	{
		hour1 = i / 10;
		hour0 = i % 10;
		
		for (k = 0; k < 60; k++) 
		{
			min1 = k / 10;
			min0 = k % 10;

			_putchar(hour1);
			_putchar(hour0);
			_putchar(':');
			_putchar(min1);
			_putchar(min0);
			_putchar('\n');
		}
	}
}
