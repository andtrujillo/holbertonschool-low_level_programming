#include <stdio.h>
/**
* print_to_98 - Function that prints all natural numbers from n to 98
* @num_: integer
* Return: none void
*/
void print_to_98(int num_)
{
	int i = 0;

	for (i = num_; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (i = num_; i >= 98; i--)
	{
		if (num_ == 98)
			break;
		printf("%d", i);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

}
