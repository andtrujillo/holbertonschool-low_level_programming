#include <stdio.h>
/**
 * main - entry point of program the prints all arguments
 * to standard output stream and the puts new line.
 * @argc: argument count - for number of arguments
 * @argv: argument vector of char *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i = argc;

	while (i--)
		printf("%s\n", *argv++);
	return (0);
}
