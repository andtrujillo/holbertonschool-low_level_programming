#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of function that only multiplies two numbers
 * @argc: integer that is the amount of arguments recieved by main
 * @argv: double pointer to one dimensional array of multiple string
 * arguments
 * Return: 0 on success otherwise 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
