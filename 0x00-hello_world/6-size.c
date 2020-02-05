#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d(s)\n ", sizeof(char));
	printf("Size of an int: %i(s)\n ", sizeof(int));
	printf("Size of a long int: %l(s)", sizeof(long int));
	printf("Size of a long long int: %ll(s)\n", sizeof(long long int));
	printf("Size of a float: %lu(s)\n", sizeof(float));
	return (0);
}
