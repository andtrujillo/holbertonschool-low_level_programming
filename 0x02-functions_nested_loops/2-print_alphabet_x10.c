#include<stdio.h>
/**
 * main - Entry point main function that prints the alphabet 10x then followed
 * by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a_ten_count = 0;

	do {
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

	}
	while (a_ten_count++ < 11);

	return (0);
}
