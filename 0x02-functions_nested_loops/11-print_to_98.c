#include "holberton.h"
#include <stdio.h> 

void print_to_98(int num_)
{
	int i = 0, hasPrinted = 0;

	if (num_ <= 98)
	{
		
		for(i = num_; i <= 98; i++)
		{
			if(!hasPrinted && num_ != 98)
			{
				putchar(',');
				putchar(' ');
			}
			printf("%d", i);
		}
		putchar('\n');
		hasPrinted = 1;
	}

	hasPrinted = 0;
	if (num_ >= 98) 
	{
		for (i = num_; i >= 98; i--)
		{
			if(!hasPrinted && num_ != 98)
			{
				putchar(',');
				putchar(' ');
			}

			printf("%d",i);
		}
		if(hasPrinted)
			_putchar('\n');
		hasPrinted = 1;
	}
}
