#include <stdio.h>
/**
 * write - Function
 * Return: integer
 */
int write(int filedes, const char *buf, unsigned int nbyte);
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 55);
	return (0);
}
