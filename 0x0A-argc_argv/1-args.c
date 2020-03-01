#include <stdio.h>

/**
 * main - entry point of program that prints number of arguments
 * recieved followed by a newline
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success otherwise exit failure
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i = argc - 1;

	if (i < 1)
		return (puts("0"));
	printf("%d\n", i);
	return (0);
}
