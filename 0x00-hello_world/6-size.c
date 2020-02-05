#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i(s)\n ", sizeof(char));
	printf("Size of an int: %i(s)\n ", sizeof(int));
	printf("Size of a long int: %d(s)", sizeof(long int));
	printf("Size of a long long int: %d(s)\n", sizeof(long long int));
	printf("Size of a float: %d(s)\n", sizeof(float));
	return (0);
}
